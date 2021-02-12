#include "Hashmap.h"
#include <iostream>

void List::add(int key, int value)
{
    // Construct a Pair
    Pair *newPair = new Pair(key, value);
    // If empty List, head -> New Pair and Tail = new Pair
    if (!head)
    {
        head = newPair;
        tail = newPair;
    }
    else
    {
        tail->next = newPair;
        tail = tail->next;
    }

    // If not empty -> Tail -> new Pair
}

bool List::hasKey(int Key)
{
    Pair *temp = head;

    while (temp)
    {
        if (temp->Key == Key)
            return true;
        temp = temp->next;
    }

    return false;
}

int List::getValue(int Key)
{
    if (!hasKey(Key))
        return -1;

    Pair *temp = head;

    while (temp)
    {
        if (temp->Key == Key)
            return temp->Value;
        temp = temp->next;
    }

    return -1;
}

void List::print()
{
    Pair *temp = head;

    while (temp)
    {
        std::cout << "<" << temp->Key << " : " << temp->Value << "> ";
        temp = temp->next;
    }
}