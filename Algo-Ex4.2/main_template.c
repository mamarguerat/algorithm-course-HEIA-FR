/**
  ****************************************************************************
  * @file    main.c
  * @author  Wolfram Luithardt / Roland Scherwey
  * @date    16 December 2017
  * @brief   Exercice 4.2 Monte Carlo for a game with dices
  ****************************************************************************/

#include <stdio.h>  // for printf()
#include <stdlib.h> // for srand() / rand() / RAND_MAX
#include <time.h>   // for time()


int main(int argc, char *argv[]){
  if (argc !=3){
    printf("Programm needs 2 parameters!!!\n");
    printf("appname <number_of_dices> <number_of_throws>\n");
    exit(-1);
  }

  unsigned int const cNumberOfDices = atoi(argv[1]);
  if(cNumberOfDices < 1  || cNumberOfDices > 20){
    printf("Number of dices must be between 1 and 20!\n");
    exit(-2);
  }

  unsigned int cNumberOfThrows = atoi(argv[2]);
  if(cNumberOfThrows < 1 || cNumberOfThrows > 10000000){
    printf("Number of throws must be between 1 and 10000000!\n");
    exit(-3);
  }

  printf("Entered parameters are: dices=%u and throws=%u  \n", cNumberOfDices, cNumberOfThrows);

  srand(time(NULL));
  for (unsigned int i=0; i<6; i++)
  {
    unsigned int num = (unsigned int)((double)rand()/(RAND_MAX+1) *6.0)+1;
    printf("Random number is %u \n", num);
  }

  return 0;
}
