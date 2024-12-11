#include "UnsortedArray.h"

UnsortedArray::UnsortedArray() {
    length = 0;
}

void UnsortedArray::MakeEmpty() {
    length = 0;
}

bool UnsortedArray::IsFull() const {
    return (length == MAX_SIZE);
}


int UnsortedArray::GetLength() const {
    return length;
}

ItemType UnsortedArray::RetrieveItem(int& item, bool& found) const {
    found = false;
    for (int i = 0; i < length; i++) {
        item = info[i];
        found = true;
        return item;
    }

    return -1; // Failure to find item
    
}

void UnsortedArray::InsertItem(int item) {
    info[length] = item;
    length++;
}

void UnsortedArray::DeleteItem(int item) {
    for (int i = 0; i < length; i++) {
        if (info[i] == item) {
            info[i] = info[length - 1];
            length--;
            return;
        }
    }
}

void UnsortedArray::DisplayItems() const {
    for (int i = 0; i < length; i++) {
        std::cout << info[i] << " ";
    }

    std::cout << std::endl;
}


