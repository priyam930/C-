//Q.3. Implement a C++ function named dynamicMemoryAllocation that takes a variable of any data type as a parameter and performs the following tasks:\ 1) Dynamically allocate memory for the variable. 2) Assign a value to the dynamically allocated variable. 3) Print the value and memory address of the dynamically allocated variable. 4) Deallocate the dynamically allocated memory. Use the function in the main program with an example variable and print the results.



#include <iostream>
using namespace std;

// Template function for dynamic memory allocation
template <typename T>
void dynamicMemoryAllocation(T value) {
    // Step 1: Dynamically allocate memory for the variable
    T* ptr = new T;

    // Step 2: Assign the value to the dynamically allocated variable
    *ptr = value;

    // Step 3: Print the value and memory address of the dynamically allocated variable
    cout << "Value of dynamically allocated variable: " << *ptr << endl;
    cout << "Memory address of dynamically allocated variable: " << ptr << endl;

    // Step 4: Deallocate the dynamically allocated memory
    delete ptr;
}

int main() {
    // Example variable
    int intValue = 42;

    // Call the dynamicMemoryAllocation function with the example variable
    dynamicMemoryAllocation(intValue);

    return 0;
}
