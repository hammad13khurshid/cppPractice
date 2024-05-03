// Include the necessary libraries
#include <iostream>  // For input/output operations
#include <cmath>     // For mathematical operations like sqrt()

// Use the standard namespace
using namespace std;

// Main function where the program execution begins
int main()
{
    // Print the title of the program
    cout << "*** Quadratic Formula in C++ ***" << endl;

    // Declare variables for the coefficients of the quadratic equation and the roots
    float a, b, c, r1, r2;

    // Prompt the user to enter the coefficients
    cout << "Enter the value of a: ";
    cin >> a;  // Read the coefficient a
    cout << "Enter the value of b: ";
    cin >> b;  // Read the coefficient b
    cout << "Enter the value of c: ";
    cin >> c;  // Read the coefficient c

    // Calculate the roots using the quadratic formula
    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);  // First root
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);  // Second root

    // Print the roots
    cout << "The roots are: " << r1 << " and " << r2 << endl;

    // Return 0 to indicate successful execution
    return 0;
}
