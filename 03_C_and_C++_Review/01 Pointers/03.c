#include <stdio.h>

int main() {
    int num = 10;
    float fnum = 3.14;
    void* vptr;

    vptr = &num;
    printf("Integer: %d\n", *(int*)vptr);  // Output: 10
    // vptr is a memory address "&num" but it is stored as a void pointer (no data type)
    // We can't dereference a void pointer, so we cast it to an integer pointer to store the integer value at that memory address "(int*)vptr"
    // Then we dereference it with the final asterisk "*" to get the value "*((int*)vptr)"

    vptr = &fnum;
    printf("Float: %.2f\n", *(float*)vptr);  // Output: 3.14
}

// void pointers are used when we don't know the data type of the memory address
// fun fact: malloc() returns a void pointer but we see it as a pointer to a specific data type after the cast (int*)malloc(4) or (float*)malloc(4) etc.

// Unlike the previous pointers where we had to specify the type of value it was pointing at, a void pointer has no type. We initially specified
// the type because different types have different amounts of bytes (4 byte vs 8 byte). The pointer needs to know how much memory it needs to 'point' to.
// A void pointer has no type, so it doesn't know how much memory it needs to point to. Therefore, we cannot dereference a void pointer.
// If we cast the void pointer to an integer pointer, (int*)vptr, it now knows how much memory to point to (4 bytes). Now we can dereference by writing
// *(int*)vptr

