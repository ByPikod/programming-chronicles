#ifndef ARRAYLIST_LIST_H
#define ARRAYLIST_LIST_H

typedef struct{
    int listSize;
    int allocatedSize;
    int *list;
} List;

List createList();
void listAdd(List *vector, int val);
void listRemove(List *vector, int index);
void listClear(List *vector);
void listSort(List vector);
void listReverse(List vector);
int listGet(List vector, int index);
int listLength(List vector);
int listIsEmpty(List vector);
int listIndexOf(List vector, int value);
int listContains(List vector, int value);
const char* listToString(List vector);

#endif //ARRAYLIST_LIST_H
