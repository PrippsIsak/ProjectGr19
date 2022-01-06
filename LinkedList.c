#include "at91sam3x8.h"
#include "system_sam3x.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isMember(struct LinkedList**first, struct LinkedList *el);
void reset();

struct WeekLinkedList
{
    int day;
    int month;
    int year;
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
  daySize++;
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

struct LinkedList*readSensor(int timeStamp)
{
    struct LinkedList *node;
    node = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    if(node == NULL)
    {
        for(int i = 0; i<10; i++)
        {
          freeNode(&listTemprature);
          size --;
        }   
        node = (struct LinkedList*) malloc(sizeof(struct LinkedList));
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
    float  compare= 0;
    while(first != NULL)
    {
        if(first->tempature > compare){
            compare = first->tempature;
        }
        first = first -> next;
    }
    return compare;
}
float findMin(struct LinkedList *first)
{
    float  compare= 1000; // hopefully its not gonna get this hot :)
    while(first != NULL)
    {
        if(first->tempature < compare){
            compare = first->tempature;
        }
        first = first -> next;
    }
   return compare;
}

struct WeekLinkedList*saveDay()
{
    struct WeekLinkedList *node;
    node = (struct WeekLinkedList*) malloc(sizeof(struct WeekLinkedList));
    if(node == NULL)
    {
        printf("Out of memory");
        return NULL;
    }
    node->id = id;
    node-> day = day;
    node -> month = month;
    node->year = year;
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
  totTemp = 0;
  daySize = 0;
  memoryFlag = 1;
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
void freeNode(struct LinkedList **first)
{
  
  struct LinkedList *temp = *first,*prev;
  prev = temp;
  temp = temp->next;
  free(prev);
  *first = temp;
}
