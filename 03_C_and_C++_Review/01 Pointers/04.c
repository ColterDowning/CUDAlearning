// Purpose: Demonstrate NULL pointer initialization and safe usage.

// Key points:
// 1. Initialize pointers to NULL when they don't yet point to valid data.
// 2. Check pointers for NULL before using to avoid crashes.
// 3. NULL checks allow graceful handling of uninitialized or failed allocations.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize pointer to NULL
    int* ptr = NULL;
    printf("1. Initial ptr value: %p\n", (void*)ptr);

    // Check for NULL before using
    if (ptr == NULL) {
        printf("2. ptr is NULL, cannot dereference\n");
    }

    // Allocate memory
    ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("3. Memory allocation failed\n");
        return 1;
    }

    printf("4. After allocation, ptr value: %p\n", (void*)ptr);

    // Safe to use ptr after NULL check
    *ptr = 42;
    printf("5. Value at ptr: %d\n", *ptr);

    // Clean up
    free(ptr);
    ptr = NULL;  // Set to NULL after freeing

    printf("6. After free, ptr value: %p\n", (void*)ptr);

    // Demonstrate safety of NULL check after free
    if (ptr == NULL) {
        printf("7. ptr is NULL, safely avoided use after free\n");
    }

    return 0;
}

// NULL pointers introduce a best practice and some grace for C programming. A NULL pointer (initialized by writing int* ptr = NULL or void* ptr = NULL)
// will point to a memory location, but we are explicitly writing the value at that memory location to be NULL. If we didn't, the value would be whatever
// was last at that memory location, which would bring lots of undefined problems. Then, when we use the pointer later in our code, we can first check if it
// is NULL. If it is, we can handle it properly before using it. They can also be useful when we need to return a NULL value in the event of a failure. 