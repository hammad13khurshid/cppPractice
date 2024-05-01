// Include the iostream library. This library allows us to perform input and output operations.
#include <iostream>

// Use the standard namespace. This allows us to use elements in the std namespace without qualifying them with std::.
using namespace std;

// The main function. Execution of the program begins here.
int main()
{
    // Print a message to the console.
    cout << "Expressions in C++" << endl;
    cout << "Let's solve a simple equation." << endl;

    // Declare three integer variables: a, b, and c.
    int a, b, c;

    // Ask the user to enter the values of a, b, and c.
    cout << "Enter the values of a, b and c" << endl;

    // Use cin to get user input and store it in the variables a, b, and c.
    cin >> a >> b >> c ;

    // Print a message to the console about what we're going to calculate.
    cout << "Solving (a + b)/(c - b)" << endl;

    // Calculate the result of the expression (a + b) / (c - b) using floating-point division.
    // static_cast<double> is used to convert the result of (a + b) to a double before performing the division.
    double result = static_cast<double>(a + b) / (c - b);

    // Print the result to the console.
    cout <<"The solution is: "<< result << endl;

    // Return 0 to indicate that the program finished successfully.
    return 0;
}
