#ifndef UNSORTEDARRAY_H
#define UNSORTEDARRAY_H

#include <stdio.h>

#define MAX_LENGTH 100

typedef int ItemType;

typedef struct UnsortedArray {
    int length;
    ItemType info[MAX_LENGTH];
} UnsortedArray;

void InitList(UnsortedArray *list);
void MakeEmpty(UnsortedArray *list);
int LengthIs(UnsortedArray *list);
void InsertItem(UnsortedArray *list, ItemType item);
void DeleteItem(UnsortedArray *list, ItemType item);
int IsFull(UnsortedArray *list);
void RetrieveItem(UnsortedArray *list, ItemType *item, int *found);
void DisplayList(UnsortedArray *list);

#endif // UNSORTEDARRAY_H