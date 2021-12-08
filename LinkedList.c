#include "at91sam3x8.h"
#include "system_sam3x.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int isMember(struct LinkedList**first, struct LinkedList *el);
void reset();

struct WeekLinkedList
{
    int date;
    float dayMax;
    float dayMin;
    float dayAvg;
    int timeMin;
    int timeMax;
    int id;
    struct WeekLinkedList*next;
};


struct LinkedList
{
    int id;
    float tempature;
    struct LinkedList*next;
    
};
void insertLast(struct LinkedList **first, struct LinkedList *el)
{
  if(*first==NULL)//list is empty!
    *first=el;
  else
  {
    struct LinkedList *temp;
    temp=*first;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=el;
  }
   size++;
}

void freeMemory(struct LinkedList**first)//might be useful for higher grades
{
    struct LinkedList *temp = *first,*prev;

    while(temp != NULL)
    {
        prev = temp;
        temp = temp->next;
        free(prev);
    }
    *first = temp;
}

int isMember(struct LinkedList**first, struct LinkedList *el)
{
    struct LinkedList *temp = *first;
    while (temp != NULL)
    {
        if (temp == el)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

/*void printList(struct LinkedList*first)//TODO: change to just print a single temp and a date
{
    if(first == NULL)
    {
        printf("The list is empty \n");
    }
    while(first != NULL)
    {
        printf("The ID is %d,     The sensor data is %lf\n", first-> id, first -> sensorData);
        first = first -> next;
    }
}*/
// the name "remove" confilicts. Therefore we use removeNode instead
void removeNode(struct LinkedList ** first, struct LinkedList *el)//do we need this for the project?
{
    if(isMember(first,el) == 1)
    {
        struct LinkedList *temp, *prev;//usuing a help pointer
        temp = *first;
        if(temp == el)
        {
            *first = temp->next;
            el->next = NULL;
            return;
        }
        while (temp != el) //searching for the element
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        el->next = NULL;
    }
}

//uppgift 2 börjar

struct LinkedList*readSensor(int timeStamp)
{
    struct LinkedList *node;
    node = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    if(node == NULL)
    {
        printf("Out of memory");
        return NULL;
    }
    node -> id = sec;
    node -> tempature = temprature; //<- usuing our made function to find a random number
    node -> next = NULL;
    
    if(temprature > maxTemp)
        {
          maxTemp = temprature;
          maxStamp = sec;
          maxTempFlag = 1;
        }
        else if(temprature < minTemp)
        {
          minTemp = temprature;
          minStamp = sec;
          minTempFlag = 1;
        }
    
    return node;
}

struct WeekLinkedList *getAddress(struct WeekLinkedList *first,int id)
{
    struct WeekLinkedList *temp;
    while (first != NULL)
    {
        if(first->id == id)
        {
            temp = first;
            return temp;
        }
        first = first->next;
    }
    return NULL;
}

float findMax(struct LinkedList *first)
{
    //struct LinkedList *max;
    float  compare= 0;
    while(first != NULL)
    {
        if(first->tempature > compare){
            compare = first->tempature;
            //maxStamp = first->id;
           // max = first;
        }
        first = first -> next;
    }
    return compare;
}
float findMin(struct LinkedList *first)
{
    //struct LinkedList *max;
    float  compare= 1000; // hopefully its not gonna get this hot :)
    while(first != NULL)
    {
        if(first->tempature < compare){
            compare = first->tempature;
            //minStamp = first->id;
           // max = first;
        }
        first = first -> next;
    }
   return compare;
}

struct WeekLinkedList*saveDay(int date)
{
    struct WeekLinkedList *node;
    node = (struct WeekLinkedList*) malloc(sizeof(struct WeekLinkedList));
    if(node == NULL)
    {
        printf("Out of memory");
        return NULL;
    }
    node-> id = id;
    node -> date = date;
    node -> dayAvg = avg;
    node->dayMax = maxTemp;
    node->dayMin = minTemp;
    node->timeMin = minStamp;
    node->timeMax = maxStamp;
    node -> next = NULL;
    reset();
    return node;
}
void reset()
{
  maxTemp = 0;
  minTemp = 1000;
  minStamp = 0;
  maxStamp = 0;
}
void weekInsertLast(struct WeekLinkedList **first, struct WeekLinkedList *el)
{
  if(*first==NULL)//list is empty!
    *first=el;
  else
  {
    struct WeekLinkedList *temp;
    temp=*first;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=el;
  }     
   weekSize++;
}
