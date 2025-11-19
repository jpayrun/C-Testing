#include<stdio.h>
// quotes need for this file
#include "coord.h"

int main(void) {
    // To use this from coord.h need to include the path for the compiler
    // struct Coordinate c;
    
    // c.x = 1;
    // c.y = 2;
    // c.z = 3;

    struct Coordinate c = {1, 2, 3};

    printf("X is %d, Y is %d, Z is %d\n", c.x, c.y, c.z);
    return 0;
}
