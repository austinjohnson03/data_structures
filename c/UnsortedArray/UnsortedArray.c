#include "UnsortedArray.h"

void InitList(UnsortedArray *list) {
    list->length = 0;
}

void MakeEmpty(UnsortedArray *list) {
    list->length = 0;
}

int LengthIs(UnsortedArray *list) {
    return list->length;
}

void InsertItem(UnsortedArray *list, ItemType item) {
    if (list->length == MAX_LENGTH) {
        return;
    }

    list->info[list->length] = item;
    list->length++;
}

void DeleteItem(UnsortedArray *list, ItemType item) {
    for (int i = 0; i < list->length; i++) {
        if (list->info[i] == item) {
            list->info[i] = list->info[list->length - 1];
            list->length--;
        }
    }
}

int IsFull(UnsortedArray *list) {
    return list->length == MAX_LENGTH;
}

void RetrieveItem(UnsortedArray *list, ItemType *item, int *found) {
    *found = 0;
    for (int i = 0; i < list->length; i++) {
        if (list->info[i] == *item) {
            *found = 1;
            *item = list->info[i];
            return;
        }
    }
}

void DisplayList(UnsortedArray *list) {
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list->info[i]);
    }
    printf("\n");
}
