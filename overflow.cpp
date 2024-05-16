//This program demonstrates the concept of Overflow in  C++.

#include <iostream>
using namespace std;

int main() {
    // x is a signed char, which can hold values from -128 to 127
    char x = 127;
    cout << "Initial value of x (signed char) within range: " << (int)x << endl;

    // Adding 1 to x will cause an overflow because it exceeds the maximum limit of signed char
    x = x + 1;
    cout << "Value of x after overflow: " << (int)x << endl;
     // (int) is used to typecast char to int as we want the value in integers not charaters.
    // y is an unsigned char, which can hold values from 0 to 255
    unsigned char y = 255;
    cout << "Initial value of y (unsigned char) within range: " << (int)y << endl;

    // Adding 1 to y will cause an overflow because it exceeds the maximum limit of unsigned char
    y = y + 1;
    cout << "Value of y after overflow: " << (int)y << endl;

    return 0;
}
