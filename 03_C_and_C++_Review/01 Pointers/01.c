#include <stdio.h> // Standard input/output header file (for printf)

// & "address of" operator
// * "dereference" operator

int main() {
    int x = 10;
    int* ptr = &x; // & is used to get the memory address of a variable (x)
    printf("Address of x: %p\n", ptr);  // Output: memory address of x
    printf("Value of x: %d\n", *ptr);  // Output: 10
    // * in the prev line is used to get the value of 
    // the memory address stored in ptr (dereferencing)

}

// x is initialized as an integer value that is set to the number 10. We do not specify where in memory it is placed
// ptr is an integer pointer. This is not an integer value, but rather a 'pointer' to an integer value. It points to the memory location
// of whatever you assign it to (in this case, the memory address of x). Think of it like a portal. Anytime you use the pointer, you are really using
// the memory location of what it is pointing to.
// '&' will give you the memory address of whatever value you put it towards. Ex: &x is the memory address of x
// '*' is the dereference operator. When you put it in front of a pointer (like *ptr), it will return the value at the memory location, not the memory
// location itself. In this case, it will return the int 10, not the memory address of the int 10.