#include <iostream>

#include "UnsortedArray.h"

using namespace std;

int main() {
    UnsortedArray list;
    int item;



    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);
    list.InsertItem(8);
    list.InsertItem(1);
    list.InsertItem(2);

    cout << "Length of list: " << list.GetLength() << endl;

    list.DisplayItems();

    list.DeleteItem(6);

    cout << "Length of list: " << list.GetLength() << endl;

    list.DisplayItems();

    list.MakeEmpty();

    cout << "Length of list: " << list.GetLength() << endl;

    list.DisplayItems();

    return 0;
}