#include "at91sam3x8.h"
#include "system_sam3x.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void freeMemory(struct LinkedList**first);
int isMember(struct LinkedList**first, struct LinkedList *el);
struct LinkedList *findMax(struct LinkedList *first);
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
    node -> tempature = writeTempWhenReady(); //<- usuing our made function to find a random number
    node -> next = NULL;
    return node;
}

struct LinkedList *getAddress(struct LinkedList *first,int id)
{
    struct LinkedList *temp;
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

struct LinkedList *findMax(struct LinkedList *first)
{
    struct LinkedList *max;
    float  compare= 0;
    while(first != NULL)
    {
        if(first->tempature > compare){
            compare = first->tempature;
            max = first;
        }
        first = first -> next;
    }
    return max;
}
