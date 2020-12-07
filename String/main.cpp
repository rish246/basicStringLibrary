#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String first_string = "this is my string\n";
    String second_string = "this a second string\n";

    String third_string = second_string + first_string;

    // print 1st, second and third words of a string

    // substring function
    // third_substr(startIdx, numElements)
    String third_substr = third_string.substr(1, 3);

    cout << "Third string = " << third_string << endl;
    cout << "Third substring = " << third_substr << endl;
    // third_string.update_char(1, 'x');
}

// overload << operator << operator(forEach function)