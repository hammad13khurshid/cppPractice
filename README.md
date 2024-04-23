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
