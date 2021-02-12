#ifndef STRING_H
#define STRING_H
#include <iostream>

class String
{
private:
    char *m_data = nullptr;

    // m_size == current size of the string
    // capacity of the char array to contain
    int m_size = 0, m_capacity = 0;

    // resize function
    void resize(int new_capacity);

public:
    String();

    String(const char *initializer_string);

    String operator+(String string_2);

    char &operator[](int);

    void operator+=(const String &str);

    friend std::ostream &operator<<(std::ostream &os, const String &str);

    // overload the += operator
    // use string += string2
    //      string += someChar

    void push_back(char ch);

    char char_at(int index);

    // update character at ith location
    void update_char(int index, char new_char);

    int size();

    // overload + operator

    String substr(int starting_idx, int num_elements);

    // overload the = operator
    // String firstStr = "this is my first string";
    void operator=(const char *char_str);
};

// This functions instance will get called
#endif