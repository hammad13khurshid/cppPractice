//This program demonstrates the concept of variables in C++.


#include <iostream>
using namespace std;

int main()
{
    string name = "Hammad Khurshid";  //name is a variable
    //string is used to store combination of characters in one variable

    int rollNo = 102;  // rollNo is a variable
    //int is used to store integer values like postive and negative numbers.

    char group = 'A';   //group is a variable
    //char is used to store a single character.

    bool isMale = true;   //isMale is a variable
    //bool is used to store true or false values.

    // Set boolalpha to display true/false instead of 1/0
    cout << boolalpha;
    
    cout <<"Student Name: "<< name << endl;
    cout <<"Roll No: "<<rollNo << endl;
    cout <<"Group:  "<< group << endl;
    cout <<"Gender is Male: "<<isMale << endl;
    //Values stored in the variables can be printed or desplayed on output screen by calling the name of the variables. 
}