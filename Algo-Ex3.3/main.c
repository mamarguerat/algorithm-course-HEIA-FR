/*
  _  _ ____ _   _       ____ ___ 
 | || | ___| | / \  ___| ___| _ \
 | __ | __|| |/ - \|___| __||   /
 |_||_|____|_|_/ \_\   |_|  |_|_\
  __  __   _   ___ _____ _ __  _  
 |  \/  | / \ | _ \_   _| |  \| |
 | |\/| |/ - \|   / | | | | | | |
 |_|  |_|_/ \_\_|_\ |_| |_|_|\__|                               
  __  __   _   ___ ___ _ _ ____ ___   _  _____
 |  \/  | / \ | _ \ __| | | ___| _ \ / \|_   _|
 | |\/| |/ - \|   /|_ \ | | __||   // - \ | |  
 |_|  |_|_/ \_\_|_\___/___/____|_|_\_/ \_\|_|  

*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct List_s{
    int32_t value;
    struct List_s *pNext;
    struct List_s *pPrev;
} List_t;

List_t* createList(void){
    return NULL;
}

/**
 * @brief Contrôle si la valeur n'est pas dans la liste et l'ajoute dans le cas échéant
 * 
 * @param pList Pointeur de la liste dans laquelle ajouter la valeur
 * @param value Valeur à ajouter dans la liste
 * @return true Si la valeur a été correctement ajoutée
 * @return false Si la valeur existe déjà dans la liste ou qu'il n'y a pas d'espace mémoire
 */
bool add(List_t** ppList, int32_t value){
    List_t *pFlow = *ppList;

    List_t *pNew = (List_t *)malloc(sizeof(List_t));
    if(pNew == NULL){
        printf("/!\\ no more memory\n");
        return false;
    }

    if(pFlow != NULL){
        while(NULL != pFlow->pNext){
            if(pFlow->value == value){
                printf("/!\\ value is in the list\n");
                free(pNew);
                return false;
            }
            else{
                pFlow = pFlow->pNext;
            }
        }
        pFlow->pNext = pNew;
    }
    else{
        *ppList = pNew;
    }

    pNew->value = value;
    pNew->pNext = NULL;
    pNew->pPrev = pFlow;
    return true;
}

void main (void){
    List_t *pList = createList();
    bool error = add(&pList, 1);
    error = add(&pList, 2);
    error = add(&pList, 42);
    error = add(&pList, 2);
}