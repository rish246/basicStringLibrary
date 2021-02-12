/*
    Basic hashmap implementation in cpp

    Author : Rishabh Katna
    Date : 12/02/2021

*/

#include <iostream>
#include "Hashmap.h"

// Make a list of Pair

int hash(int num)
{
    return (num * 13 + 7) % 10;
}

int main()
{
    // Adding works
    // Hashing function
    List hashMap[10];

    int keyList[] = {13, 24, 1, 4};
    int valList[] = {1, 3, 2, 3};

    for (int i = 0; i < 4; i++)
    {
        // Take Key value Pair
        // Hash Key
        // hashMap[hashKey]->add(value)
        int hashKey = hash(keyList[i]);

        hashMap[hashKey].add(keyList[i], valList[i]);
        // hashMap[hashKey]->add(keyList[i], valList[i]);
    }
    // hashMap.print();

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " : { ";
        hashMap[i].print();
        std::cout << " }" << std::endl;
    }
}
