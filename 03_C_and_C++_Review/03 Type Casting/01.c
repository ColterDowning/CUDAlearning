#include <stdio.h>

int main() {
    // c-style type casting
    float f = 69.69;
    int i = (int)f;
    printf("%d\n", i);  // Output: 69 ( rounded down since decimal is truncated (deletes the .69 part) )
    // to char
    char c = (char)i;
    printf("%c\n", c);  // Output: E (ASCII value of 69 -> https://www.asciitable.com/)
}

// Casting in C allows you to convert a variable to a different type. f is initially a float, but we can cast the information to i as an integer.
// Nothing happens to f when we cast, we are just making a new variable i of a different type but with the same information