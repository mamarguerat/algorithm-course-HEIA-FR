/**
  ****************************************************************************
  * @file    main.c
  * @author  Wolfram Luithardt / Roland Scherwey
  * @date    20 november 2017
  * @brief   Small FIFO application using chained list
  *          Exercice 3.1 FIFO Template
  ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct Data_s {
   int    sensorNumber;
   double sensorValue;
   long   time;
   struct Data_s* pNext;
} Data_t;

/// @brief  With this function a new list is created
/// @param  -
/// @return pointer to the first element of the list
Data_t* createFIFO(void);

/// @brief  Add a new element to list
/// @param  ppList is the pointer to the list pointer
/// @param  newElement is element to be added to the list
/// @return true for success, false if the new element could not be added to the list
bool put(Data_t** ppList, Data_t newElement );

/// @brief  Retrieve an element from the list
/// @param  ppList is the pointer to the list pointer
/// @param  pElement is the pointer to store the retrieved element
/// @return true for success, false if there was no element in the list.
bool get(Data_t** ppList, Data_t* pElement);

/// @brief  Shows the stored elements of the list
/// @param  -
/// @return -
void showList(Data_t* pList);

int main(void){
  // c)
  Data_t* pList = createFIFO();

  for (int i=0;i<5;i++){
    Data_t element;
    element.sensorNumber = i;  // just add some test values
    element.sensorValue  = 0.1*i*i;
    element.time = time(NULL)+i;
    if(!put(&pList, element)){
      printf("No more memory\n");
      exit(-1);
    }
  }

  showList(pList);

  for (int i=0; i<5;i++){
    Data_t element2;
    if (!get(&pList, &element2)){
      printf("Error in getting element...\n");
    } else {
      printf("get: sensor=%d, value=%f, time=%ld\n", element2.sensorNumber, element2.sensorValue, element2.time);
    }
  }

  showList(pList);

  return 0;
}

Data_t* createFIFO(void){
  // a)
  return NULL;
}

bool put(Data_t** ppList, Data_t newElement ){
  // add element at the end of the list (FIFO)


  return true;
}

bool get(Data_t** ppList, Data_t* pElement){
  // a) check first if list is not empty...
  // a) if not, we just need to return the first element and to delete it...

  return true;
}

void showList(Data_t* pList){
  // b)

  // parse all elements and show its related information
  // printf("sensor=%d, value=%f, time=%ld\n", ...);

  printf("\n");
}
