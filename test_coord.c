#include<stdio.h>
// quotes need for this file
#include "coord.h"

coordinat_t scale_coordinate(coordinat_t c, int scale);

int main(void) {
    // To use this from coord.h need to include the path for the compiler
    // struct Coordinate c;
    
    // c.x = 1;
    // c.y = 2;
    // c.z = 3;

    //struct Coordinate c = {1, 2, 3};
    coordinat_t c = {1, 2, 3};

    printf("X is %d, Y is %d, Z is %d\n", c.x, c.y, c.z);

    //coordinat_t new_coordinate = scale_coordinate(c, 2);
    coordinat_t c2 = scale_coordinate(c, 2);

    printf("X is %d, Y is %d, Z is %d\n", c2.x, c2.y, c2.z);

    return 0;
}

coordinat_t scale_coordinate(coordinat_t c, int scale) {
    coordinat_t result = {
        .x = c.x * scale,
        .y = c.y * scale,
        .z = c.z * scale
    };
    
    return result;
}
