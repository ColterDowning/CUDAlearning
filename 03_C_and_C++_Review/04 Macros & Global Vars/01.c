#include <stdio.h>

// examples for each conditional macro
// #if
// #ifdef
// #ifndef
// #elif
// #else
// #endif

#define PI 3.14159 //Defining a new variable called PI and setting it equal to 3.14159. I know, there is no '=' sign..... =(
#define AREA(r) (PI * r * r) // define can also be used as a lambda function =)

#ifndef radius
#define radius 7
#endif

// if elif else logic
// we can only use integer constants in #if and #elif
#if radius > 10
#define radius 10
#elif radius < 5
#define radius 5
#else
#define radius 7
#endif


int main() {
    printf("Area of circle with radius %d: %f\n", radius, AREA(radius));  // Output: Area of circle with radius 6.900000: 149.571708
}