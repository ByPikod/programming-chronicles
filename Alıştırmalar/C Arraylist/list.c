#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

// Create a list.
List createList(){
    List vector;
    vector.listSize = 0;
    vector.list = malloc(sizeof(int) * 100);
    vector.allocatedSize = 100;
    return vector;
}

// Add an element to the list.
void listAdd(List *vector, int val){
    if(vector->listSize == vector->allocatedSize){
        int *list = malloc(sizeof(int) * (vector->allocatedSize * 2));
        for(int i = 0; i < vector->listSize; i++)
            list[i] = vector->list[i];
        free(vector->list);
        vector->list = list;
        vector->allocatedSize = vector->allocatedSize * 2;
    }
    vector->list[vector->listSize] = val;
    vector->listSize++;
}

// Remove element from vector.
void listRemove(List *vector, int index){
    for(int i = index; i < listLength(*vector) - 1; i++){
        vector->list[i] = vector->list[i+1];
    }
    vector->listSize--;
}

// Clear the list.
void listClear(List *vector){
    free(vector->list);
    vector->list = malloc(sizeof(int) * 100);
    vector->listSize = 0;
    vector->allocatedSize = 100;
}

void quickSort(int array[], int first, int last){
    if(first >= last) return;
    int i = first, j = first, pivot = array[last], temp;
    while(i < last){
        if(array[i] < pivot){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            j++;
        }
        i++;
    }
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    quickSort(array, first, j-1);
    quickSort(array, j+1, last);
}

// Sort list in ascending order (QuickSort algorithm).
void listSort(List vector){
    quickSort(vector.list, 0, vector.listSize-1);
}

// Sort list in ascending order.
void listReverse(List vector){
    for (int start=0, end=vector.listSize-1; start<=end; start++,end--) {
        int temp = vector.list[start];
        vector.list[start] = vector.list[end];
        vector.list[end] = temp;
    }
}

// Get element by index.
int listGet(List vector, int index){
    return vector.list[index];
}

// Get listLength of the vector.
int listLength(List vector){
    return vector.listSize;
}

// Returns true if list is empty.
int listIsEmpty(List vector){
    return (vector.listSize == 0);
}

/*
 * Returns index of the specified value.
 * If not founded returns 0
 */
int listIndexOf(List vector, int value){
    for(int i = 0; i < vector.listSize; i++){
        if(vector.list[i] == value)
            return i;
    }
    return 0;
}


// Returns true if list contains specified value. If not returns false.
int listContains(List vector, int value){
    for(int i = 0; i < vector.listSize; i++){
        if(vector.list[i] == value)
            return 1;
    }
    return 0;
}

const char* listToString(List vector){
    char* str = malloc(sizeof (char) * INT_MAX);
    int index = 0;
    for (int i = 0; i < vector.listSize; ++i) {
        index += sprintf(&str[index], "%d, ", vector.list[i]);
    }
    realloc(str, sizeof (char) * (index + 1));

    return str;
}