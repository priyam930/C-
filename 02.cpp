//Q.2. Implement a C++ function named memoryAddresses that takes two variables of different data types as parameters and performs the following tasks: 1) Determine and print the memory address of the first variable without using any standard library functions. 2) Determine and print the memory address of the second variable without using any standard library functions. 3) Use the function in the main program with example variables and print the results.

#include <iostream>
using namespace std;

// Function to print memory addresses of two variables
template <typename T1, typename T2>
void memoryAddresses(T1& var1, T2& var2) {
    // Step 1: Print the memory address of the first variable
    cout << "Memory address of first variable: " << &var1 << endl;

    // Step 2: Print the memory address of the second variable
    cout << "Memory address of second variable: " << &var2 << endl;
}

int main() {
    // Example variables
    int intVar = 10;
    double doubleVar = 20.5;

    // Call the memoryAddresses function with example variables
    memoryAddresses(intVar, doubleVar);

    return 0;
}
