// Include the iostream library for input/output
#include <iostream>

// Use the standard namespace
using namespace std;

// Start of the main function
int main()
{
    // Display a message about the program
    cout << "*** Increment and Decrement Operators ***" << endl;
    
    // Initialize variables a and b
    int a = 10;
    int b = 5;

    // Display the initial values of a and b
    cout << "Initial value of A is: " << a << " & Initial value of B is: " << b << endl;
    
    // Increment a and assign the result to increment
    a++;
    int increment = a;

    // Decrement b and assign the result to decrement
    b--;
    int decrement = b;

    // Display the values of a and b after incrementing and decrementing
    cout << "A after Increment is: " << increment << endl;
    cout << "B after Decrement is: " << decrement << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
