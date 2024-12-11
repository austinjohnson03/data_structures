#include <stdio.h>

#include "UnsortedArray.h"

int main() {
    UnsortedArray list;
    ItemType item;
    int found;

    InitList(&list);

    InsertItem(&list, 5);
    InsertItem(&list, 3);
    InsertItem(&list, 7);
    InsertItem(&list, 1);
    InsertItem(&list, 9);

    DisplayList(&list);

    item = 3;

    RetrieveItem(&list, &item, &found);

    if (found) {
        printf("Item found: %d\n", item);
        found = 0;
    } else {
        printf("Item not found\n");
    }

    DeleteItem(&list, 3);

    DisplayList(&list);

    MakeEmpty(&list);

    DisplayList(&list);

    return 0;
}