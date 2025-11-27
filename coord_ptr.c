#include<stdio.h>
#include "coord.h"

int main(void) {
    coordinat_t points[3] = {
        {5, 4, 1},
        {7, 3, 2},
        {9, 6, 8}
    };

    // Below not recommended, works because struct is of all type int
    int *points_start = (int *)points;

    int len = sizeof(coordinat_t) / sizeof(int);

    for (int i = 0; i<9; i++) {
        printf("points_start[%d] = %d\n", i, points_start[i]);
    }
}