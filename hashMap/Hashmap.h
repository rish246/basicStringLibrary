#ifndef HASHMAP_H
#define HASHMAP_H

// Define the key value pair
class Pair
{
public:
    int Key, Value;

    Pair *next;

    Pair(int _key, int _value)
        : Key(_key), Value(_value), next(nullptr) {}
};

class List
{
public:
    Pair *head, *tail;

    List()
        : head(nullptr), tail(nullptr) {}

    // Add Pair to the end of the list
    void add(int key, int value);

    bool hasKey(int Key);

    int getValue(int Key);

    // This is ref to local var result.. and not to the list member

    void print();
};

#endif