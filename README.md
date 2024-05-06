# C++ Daily Practice

Welcome to my C++ Daily Practice repository! 

This repository is a testament to my journey of learning C++ from scratch. Each day, I will be pushing new code as I learn and grow my skills in C++. 

## What's Inside?

You'll find various directories corresponding to different topics I've explored in C++, ranging from basic syntax, data structures, algorithms, to more advanced concepts. Each directory will contain my practice code, along with comments explaining my thought process.

## Why C++?

C++ is a powerful language known for its performance and flexibility. It's widely used in game development, real-time systems, and high-performance computing - areas that I'm deeply interested in.

## My Goal

My goal is to become proficient in C++, enabling me to build efficient and performant applications. I believe that by practicing daily and documenting my progress, I can make consistent strides towards this goal.

Feel free to explore this repository, provide feedback, and learn alongside me. Happy coding!

              
              *************************************************************


# Learning C++ from scratch:

## **What is C++:**  
   C++ is a programming language that is used to create computer programs. It’s like a toolset that developers use to build software, similar to how a carpenter uses tools to build a house. It’s known for its speed and efficiency, and is commonly used in areas like video games and real-time systems.
   
**Benefits of C++:** C++ has several benefits that make it a popular choice among programmers:

`Performance`: C++ is known for its efficiency and fast execution. It’s often chosen for applications where performance is critical.
`Compatibility with C`: Since C++ is an extension of C, it is highly compatible with C. If there is a valid C     application, it is compatible with C++.
`Object-Oriented Programming`: C++ supports object-oriented programming, which allows for better organization and     reusability of code.
`Low-Level Manipulation`: C++ allows for low-level programming tasks, like memory manipulation, which is necessary in   some cases.
`Large Community and Libraries`: C++ has a large and mature ecosystem of libraries and frameworks, which can be used to accelerate development and simplify tasks.
`Portability`: Programs written in C++ can often be executed on other platforms without any modifications.
`Use Cases`: C++ finds a wide range of applications, including video games, operating systems, embedded systems, and real-time mathematical simulations.



## Let's delve into the structure of a C++ program. 
 A basic C++ program typically consists of several essential components:

1. **Comments**:
   - Comments are lines in your code that provide explanations or notes for humans (programmers) and are ignored by the compiler.
   - They start with `//` for single-line comments or `/*` and `*/` for multi-line comments.
   - Example:
     ```cpp
     // This is a single-line comment
     /* This is a
        multi-line comment */
     ```

2. **Preprocessor Directives**:
   - Preprocessor directives begin with a hash sign (`#`) and are processed before actual compilation.
   - Common directives include `#include` (for including header files) and `#define` (for defining macros).
   - Example:
     ```cpp
     #include <iostream> // Include the iostream header
     ```

3. **Main Function**:
   - Every C++ program must have a `main` function.
   - The `main` function is the entry point of execution.
   - It has the following structure:
     ```cpp
     int main() {
         // Your code goes here
         return 0; // Indicates successful execution
     }
     ```

4. **Function Body**:
   - The code inside the `main` function's curly braces `{ ... }` constitutes the function body.
   - It contains statements that define the program's behavior.
   - Example:
     ```cpp
     int main() {
         std::cout << "Hello, World!";
         return 0;
     }
     ```

5. **Standard Input/Output**:
   - The `std::cout` stream is used for output (printing to the console).
   - The `std::cin` stream is used for input (reading from the console).
   - Example:
     ```cpp
     int main() {
         int age;
         std::cout << "Enter your age: ";
         std::cin >> age;
         std::cout << "You are " << age << " years old.";
         return 0;
     }
     ```

6. **Return Statement**:
   - The `return 0;` statement indicates successful program execution.
   - Other values (non-zero) can be returned to indicate errors or abnormal termination.
   - Example:
     ```cpp
     int main() {
         // Your code
         return 0; // Successful execution
     }
     ```

## My First C++ Program
Here's a basic C++ program which prints Hello World messages.
Let’s break down the code:

1: **Include Statements**:
`#include <iostream>`: This line includes the iostream library, which allows input/output operations. It provides functionality for displaying text on the console.

2: **Namespace Declaration**:
`using namespace std;`: By using the std namespace, we can directly access standard C++ functions and objects without prefixing them with `std::`.

3: **Main Function**:
`int main()`: The main function is the entry point of the program. Execution starts here.
Inside the curly braces `{ ... }`, we have the program’s logic.

4: **Output Statements**:
`cout << "Hello World..." << endl;`: This line prints “Hello World…” to the console. The `<<` operator is used for output.
`endl` inserts a new line after printing.
`cout << "This is my first program in C++";`: This line prints “This is my first program in C++” to the console without a new line.

5: **Return Statement**:
`return 0;`: Indicates successful execution of the program. The value 0 is conventionally used to indicate success.

## Input/Output: 

 This program demonstrates the concept of taking inputs and displaying them in C++. Here's a breakdown of what each line does:
 
 ```cpp
 #include <iostream>     
 ```
 This line includes the iostream library which allows for input/output operations.

 ```cpp
 using namespace std;    
 ```
 This line tells the compiler to use the standard (std) namespace.

 ```cpp
 int main()              
 ```
 This line defines the main function. Execution of the program begins here.

 ```cpp
 string name;        
 ```
 This line declares a string variable 'name' to store the user's name.

 ```cpp
 int age;            
 ```
 This line declares an integer variable 'age' to store the user's age.

```cpp
 cout<<"Please enter your name: ";    
 ```
 This line prompts the user to enter their name.

 ```cpp
 cin>>name;          
 ```
 This line takes the user's name as input and stores it in the 'name' variable.

  ```cpp
  cout<<"please enter your age: ";     
  ```
  This line prompts the user to enter their age.
  
  ```cpp
  cin>>age;           
  ```
  This line takes the user's age as input and stores it in the 'age' variable.
  
  ```cpp
  cout<<"Your name is:"<<name<<" and you are "<<age<<" years old."<<endl;    
  ```
  This line prints the user's name and age to the console.
  
  ```cpp
  return 0;    
  ```
  This line indicates that the program has run successfully and ends the main function.
  ```
  
  ``` ******************************** 
  ```

## C++ Data Types

In C++, data types specify the type of data that a variable can hold. Here are some commonly used data types in C++:

### 1. `int`

The `int` data type is used to store whole numbers. It typically requires **4 bytes** of memory space and ranges from **-2,147,483,648 to 2,147,483,647**.

```cpp
int age = 20;
```

### 2. `float`

The `float` data type is used to store decimal numbers with less range and accuracy. It typically requires **4 bytes** of memory space.

```cpp
float height = 5.8;
```

### 3. `double`

The `double` data type is used to store decimal numbers with more range and accuracy. It typically requires **8 bytes** of memory space.

```cpp
double weight = 56.150;
```

### 4. `char`

The `char` data type is used to store a single character. It typically requires **1 byte** of memory space and ranges from **-128 to 127**.

```cpp
char gender = 'M';
```

### 5. `bool`

The `bool` data type is used to store Boolean or logical values. It typically requires **1 byte** of memory space and can store either **true or false**.

```cpp
bool married = false;
```

### 6. `void`

The `void` data type represents a valueless entity. It is used for those functions which do not return a value.

### 7. `wchar_t`

The `wchar_t` data type is used to store a wide-character type or multibyte-character type. It typically requires **2 bytes** of memory space and ranges from **0 to 65,535**.

```cpp
wchar_t letter = L'A';
```

Note: The memory sizes and ranges can vary depending on the compiler and the machine.


 ## Operators in C++:

  **What Are Operators?**
  Operators are special symbols in C++ that allow you to perform various actions on variables and values.
  Think of them as tools that help you manipulate data, just like how a calculator has buttons for addition, subtraction, and more.
  **Types of Operators:**
  C++ provides several types of operators, each serving a specific purpose. Here are some common ones:
  

1. ### Arithmetic Operators:
   - `+` (**Addition**): Adds two values.
     ```cpp
     int sum = 5 + 3; // sum is 8
     ```
   - `-` (**Subtraction**): Subtracts one value from another.
     ```cpp
     int difference = 10 - 4; // difference is 6
     ```
   - `*` (**Multiplication**): Multiplies two values.
     ```cpp
     int product = 3 * 7; // product is 21
     ```
   - `/` (**Division**): Divides one value by another.
     ```cpp
     double quotient = 15.0 / 4; // quotient is 3.75
     ```
   - `%` (**Modulus**): Computes the remainder after division.
     ```cpp
     int remainder = 17 % 5; // remainder is 2
     ```

2. ### Relational Operators:
   - `>` (**Greater than**): Checks if the left operand is greater than the right operand.
     ```cpp
     bool isGreater = 8 > 5; // true
     ```
   - `<` (**Less than**): Checks if the left operand is less than the right operand.
     ```cpp
     bool isLess = 3 < 10; // true
     ```
   - `>=` (**Greater than or equal to**): Checks if the left operand is greater than or equal to the right operand.
     ```cpp
     bool isGreaterOrEqual = 5 >= 5; // true
     ```
   - `<=` (**Less than or equal to**): Checks if the left operand is less than or equal to the right operand.
     ```cpp
     bool isLessOrEqual = 7 <= 3; // false
     ```
   - `==` (**Equal to**): Checks if the operands are equal.
     ```cpp
     bool isEqual = 6 == 6; // true
     ```
   - `!=` (**Not equal to**): Checks if the operands are not equal.
     ```cpp
     bool isNotEqual = 4 != 4; // false
     ```
Remember that these operators are fundamental building blocks for writing expressive and powerful C++ programs! 

## Expressions in C++:

In C++, an `expression` is a combination of `operators`, `constants`, and `variables` that are arranged according to the syntax rules of the language. Expressions can perform operations like `addition`, `subtraction`, `multiplication`, `division`, etc., and produce a `value`. The type of the `value` that an `expression` returns depends on the `elements` used in the `expression`.

Expressions in C++ can be of various types such as constant expressions, integral expressions, float expressions, pointer expressions, relational expressions, logical expressions, bitwise expressions, and special assignment expressions. If an expression is a combination of these types, it is known as a compound expression.

**Example Code:** Here’s a simple C++ program that demonstrates the concept of expressions:
```cpp
#include <iostream>

using namespace std;

int main()
{
    // Declare three integer variables: a, b, and c.
    int a = 5, b = 10, c = 15;

    // Calculate the result of the expression (a + b) / (c - b) using integer division.
    int result = (a + b) / (c - b);

    // Print the result to the console.
    cout << "The result of the expression (a + b) / (c - b) is: " << result << endl;

    return 0;
}
```

In this `program`, we declare three `integer` `variables` `a`, `b`, and `c`, and `assign` them the `values` `5`, `10`, and `15` respectively. We then `calculate` the `result` of the `expression (a + b) / (c - b)` and `store` it in the variable `result`. Finally, we `print` the `result` to the `console`.


## Compound Assignment Operators:
In C++, compound assignment operators are used to update the value of a variable using binary operations. The general form is:

`variable operator= expression;`

Here, `operator` can be any `binary arithmetic operator` like `+`, `-`, `*`, `/`, `%`, etc. The expression is evaluated and combined with the variable using the `operator`, and the `result` is `stored` back in `variable`.

**Here are some examples of compound assignment operators:**

### Addition Assignment (+=): 
Adds the right operand to the left operand and assigns the result to the left operand.
`a += b; // Equivalent to a = a + b;`

### Subtraction Assignment (-=): 
Subtracts the right operand from the left operand and assigns the result to the left operand.
`a -= b; // Equivalent to a = a - b;`

### Multiplication Assignment (*=): 
Multiplies the right operand with the left operand and assigns the result to the left operand.
`a *= b; // Equivalent to a = a * b;`

### Division Assignment (/=):
Divides the left operand by the right operand and assigns the result to the left operand.
`a /= b; // Equivalent to a = a / b;`

### Modulus Assignment (%=): 
Takes modulus using two operands and assigns the result to the left operand.
`a %= b; // Equivalent to a = a % b;`

These `operators` make the code more concise and easier to read. They also can potentially lead to performance improvements, as the variable is only evaluated once, as opposed to twice with the long form. 

## Bitwise Operators in C++
Bitwise operators are used for performing operations on binary numbers. In C++, these operators work on the bit level. Here are the most commonly used bitwise operators:

### 1. Bitwise AND (&)
The bitwise AND operator compares each bit of the first operand to the corresponding bit of the second operand. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
```cpp
int a = 10;  // Binary: 1010
int b = 4;   // Binary: 0100
cout << "(a & b) = " << (a & b) << endl;  // Outputs 0 (0000 in binary)
```

### 2. Bitwise OR (|)
The bitwise OR operator compares each bit of the first operand to the corresponding bit of the second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
```cpp
int a = 10;  // Binary: 1010
int b = 4;   // Binary: 0100
cout << "(a | b) = " << (a | b) << endl;  // Outputs 14 (1110 in binary)
```\

### 3. Bitwise XOR (^)
The bitwise XOR (exclusive OR) operator compares each bit of the first operand to the corresponding bit of the second operand. If the bits are not identical, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.
```cpp
int a = 10;  // Binary: 1010
int b = 4;   // Binary: 0100
cout << "(a ^ b) = " << (a ^ b) << endl;  // Outputs 14 (1110 in binary)
```

### 4. Bitwise Left Shift (<<)
The bitwise left shift operator moves the bits of the number to the left by the specified number of places. Each shift to the left doubles the number, so shifting a by 2 places results in a22.
```cpp
int a = 10;  // Binary: 1010
cout << "(a << 2) = " << (a << 2) << endl;  // Outputs 40 (101000 in binary)
```

### 5. Bitwise Right Shift (>>)
The bitwise right shift operator moves the bits of the number to the right by the specified number of places. Each shift to the right halves the number, so shifting a by 2 places results in a/2/2.
```cpp
int a = 10;  // Binary: 1010
cout << "(a >> 2) = " << (a >> 2) << endl;  // Outputs 2 (10 in binary)
```
