#include <stdio.h>
#include "list.h"


/* Examples */
void ClassicExample(){
    List vector = createList();
    for(int i = 0; i < 1000; i++){
        listAdd(&vector, 1000 - i);
    }
    printf("%s\n", listToString(vector));
}

void RemoveExample(){

    List vector = createList();

    for(int i = 0; i < 10; i++){
        listAdd(&vector, i);
    }

    for(int i = 0; i < listLength(vector); i++){
        printf("%d\n", listGet(vector, i));
    }

    printf("Number at the 5th index was removed.\n");
   listRemove(&vector, 5);

    for(int i = 0; i < listLength(vector); i++){
        printf("%d\n", listGet(vector, i));
    }

    listClear(&vector);
    printf("List cleared.\n");
    printf("IsEmpty function: %d\n", listIsEmpty(vector));

    for(int i = 1; i < 4; i++) {
        listAdd(&vector, i);
        printf("Added '%d' to the list.\n", i);
    }

    printf("List elements: \n");
    for(int i = 0; i < listLength(vector); i++){
        printf("%d\n", listGet(vector, i));
    }

    printf("IsEmpty function: %d\n", listIsEmpty(vector));

}

void IndexOfExample(){

    List vector = createList();

    for(int i = 0; i < 10; i++){
        listAdd(&vector, i);
    }
    printf("Value stored in the 5th index: %d", listIndexOf(vector, 5));

}

void SortExample(){

    List list = createList();
    listAdd(&list, 1);
    listAdd(&list, 6);
    listAdd(&list, 7);
    listAdd(&list, 4);
    listAdd(&list, 5);
    listAdd(&list, 9);
    listAdd(&list, 8);
    listAdd(&list, 2);
    listAdd(&list, 3);
    printf("List random: %s\n", listToString(list));
    listSort(list);
    printf("List sorted: %s\n", listToString(list));
    listReverse(list);
    printf("List reversed: %s\n", listToString(list));

}

void ContainsExample(){

    List vector = createList();

    for(int i = 0; i < 10; i++){
        listAdd(&vector, i);
    }
    int statement = listContains(vector, 9);
    if(statement)
        printf("List does contain number '9'.");
    else
        printf("List doesn't contain number '9'.");

}

int main() {

    SortExample();
    return 0;

}