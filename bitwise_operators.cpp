// Include the iostream library to allow for input/output operations
#include <iostream>

// Use the standard namespace to avoid having to type std:: before cout and endl
using namespace std;

// The main function where the program starts execution
int main()
{
    // Declare and initialize integer variables a and b
    int a = 10;  // In binary: 1010
    int b = 4;   // In binary: 0100

    // Print a header for the output
    cout << "*** Bitwise operators in C++ ***" << endl;
    cout << "Decimal     Binary" << endl;
    cout << "a = 10      1010" << endl;
    cout << "b = 4       0100" << endl;

    // Perform bitwise AND operation on a and b, and print the result
    // Bitwise AND compares each bit of the first operand to the corresponding bit of the second operand. 
    // If both bits are 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
    cout << "Bitwise AND:          (a & b) = " << (a & b) << "   (0000 in binary)" << endl;

    // Perform bitwise OR operation on a and b, and print the result
    // Bitwise OR compares each bit of the first operand to the corresponding bit of the second operand. 
    // If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
    cout << "Bitwise OR:           (a | b) = " << (a | b) << "   (1110 in binary)" << endl;

    // Perform bitwise XOR operation on a and b, and print the result
    // Bitwise XOR compares each bit of the first operand to the corresponding bit of the second operand. 
    // If the bits are not identical, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
    cout << "Bitwise XOR:          (a ^ b) = " << (a ^ b) << "   (1110 in binary)" << endl;

    // Perform bitwise left shift operation on a by 2 places, and print the result
    // Bitwise left shift operator moves the bits of the number to the left by the specified number of places. 
    // Each shift to the left doubles the number, so shifting a by 2 places results in a*2*2.
    cout << "Bitwise Left Shift:   (a << 2) = " << (a << 2) << " (101000 in binary)" << endl;

    // Perform bitwise right shift operation on a by 2 places, and print the result
    // Bitwise right shift operator moves the bits of the number to the right by the specified number of places. 
    // Each shift to the right halves the number, so shifting a by 2 places results in a/2/2.
    cout << "Bitwise Right Shift:  (a >> 2) = " << (a >> 2) << " (10 in binary)" << endl;

    // Return 0 to indicate successful execution of the program
    return 0;
}
