//This program demonstrates the concept of Compund Assignment operators in C++.

// Include the iostream library to allow for input/output operations
#include <iostream>

// Use the standard namespace to avoid having to type std:: before common operations like cout
using namespace std;

// The main function, where the program starts
int main()
{
    // Declare and initialize two float variables, a and b
    float a = 10;
    float b = 13;

    // Print a title for the program
    cout <<"*** Compound Assignment Operators ***" << endl;


    // Declare and initialize a float variable named value
    float value = 5;
    cout <<"The values are: Variable = " << value << ", a = "<< a << ", b = "<< b << endl;

    // Add the value of a to value and store the result in value
    value += a; 
    // Print the new value after the addition
    cout <<"After Variable += a : "<< value << endl;

    // Subtract the value of b from value and store the result in value
    value -= b;
    // Print the new value after the subtraction
    cout <<"After Variable -= b: "<< value << endl;

    // Multiply the value by a and store the result in value
    value *= a;
    // Print the new value after the multiplication
    cout <<"After Variable *= a: "<< value << endl;

    // Divide the value by b and store the result in value
    value /= b;
    // Print the new value after the division
    cout <<"After Variable /= b: "<< value << endl;


    // End of the main function
    return 0;
}