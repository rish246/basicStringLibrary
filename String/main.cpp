#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String first_string = "this is my string";
    String second_string = "this a second string";

    String third_string = second_string + first_string;

    // print 1st, second and third words of a string

    // substring function
    // third_substr(startIdx, numElements)
    String third_substr = third_string.substr(1, 3);

    // cout << "Third substring = " << third_substr << endl;
    // cout << "Second location of third substr " << third_substr[1] << endl;

    // // sent a reference to 2nd element of t
    // // i can not alter the value of 1st element using simple assignment
    // third_substr[1] = 't';
    // cout << "Third substring = " << third_substr << endl;
    // cout << "Second location of third substr " << third_substr[1] << endl;

    cout << "First string before operation = " << first_string << endl;

    // test the += operator
    first_string += first_string;

    cout << "First string after operation = " << first_string << endl;
}

// overload << operator << operator(forEach function)