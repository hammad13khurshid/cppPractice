// This program demonstrates the concept of operators in C++

#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 3;

    // Arithmetic Operators
    int Addition = a + b; // Addition
    int Subtraction = a - b; // Subtraction
    int Multiplication = a * b; // Multiplication
    int Division = a / b; // Division
    int Modulus = a % b; // Modulus

    cout << "Arithmetic Operators: +, -, *, /, %" << endl;
    cout << a << " + " << b << " = " << Addition << endl;
    cout << a << " - " << b << " = " << Subtraction << endl;
    cout << a << " * " << b << " = " << Multiplication << endl;
    cout << a << " / " << b << " = " << Division << endl;
    cout << a << " % " << b << " = " << Modulus << endl;

    // Relational Operators
    bool GreaterThan = a > b; // Greater than
    bool LessThan = a < b; // Less than
    bool GreaterThanOrEqual = a >= b; // Greater than or equal to
    bool LessThanOrEqual = a <= b; // Less than or equal to
    bool EqualTo = a == b; // Equal to
    bool NotEqualTo = a != b; // Not equal to

    // Set boolalpha to display true/false instead of 1/0
    cout << boolalpha;
    cout << "\nRelational Operators: >, <, >=, <=, ==, !=" << endl;
    cout << a << " > " << b << " = " << GreaterThan << endl;
    cout << a << " < " << b << " = " << LessThan << endl;
    cout << a << " >= " << b << " = " << GreaterThanOrEqual << endl;
    cout << a << " <= " << b << " = " << LessThanOrEqual << endl;
    cout << a << " == " << b << " = " << EqualTo << endl;
    cout << a << " != " << b << " = " << NotEqualTo << endl;

    return 0;
}
