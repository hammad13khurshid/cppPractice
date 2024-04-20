// This program demonstrates the concept of taking inputs and displaying them in C++

#include <iostream>     
// This line includes the iostream library which allows for input/output operations
using namespace std;    
// This line tells the compiler to use the standard (std) namespace

int main()              
// This line defines the main function. Execution of the program begins here
{
    string name;        
    // This line declares a string variable 'name' to store the user's name
    int age;            
    // This line declares an integer variable 'age' to store the user's age

    cout<<"Please enter your name: ";    
    // This line prompts the user to enter their name

    cin>>name;          
    // This line takes the user's name as input and stores it in the 'name' variable

    cout<<"please enter your age: ";     
    // This line prompts the user to enter their age

    cin>>age;           
    // This line takes the user's age as input and stores it in the 'age' variable

    cout<<"Your name is:"<<name<<" and you are "<<age<<" years old."<<endl;    
    // This line prints the user's name and age to the console

    return 0;    
    // This line indicates that the program has run successfully and ends the main function
}
