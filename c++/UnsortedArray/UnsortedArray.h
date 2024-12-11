#ifndef UNSORTEDARRAY_H
#define UNSORTEDARRAY_H

#define MAX_SIZE 100

#include <iostream>

typedef int ItemType;

class UnsortedArray
{
    public:
        UnsortedArray();
        void MakeEmpty();
        bool IsFull() const;
        int GetLength() const;
        ItemType RetrieveItem(int& item, bool& found) const;
        void InsertItem(int item);
        void DeleteItem(int item);
        void DisplayItems() const;

    private:
        int length;
        int info[MAX_SIZE];

};

#endif // UNSORTEDARRAY_H
