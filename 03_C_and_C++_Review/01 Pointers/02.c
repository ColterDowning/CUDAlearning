#include <stdio.h>

int main() {
    int value = 42;
    int* ptr1 = &value;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
    
    
    printf("Value: %d\n", ***ptr3);  // Output: 42
}

// You can have multiple pointers pointing at eachother. Remember, think of a pointer as a portal. With a bunch of portals pointing to eachother,
// you will just be pointing at the memory location of the initial value. ptr3 actually points to int value = 42, it just goes through a few memory
// addresses first.