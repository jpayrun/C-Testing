#include<stdio.h>

int main(void) {
    int numbers[5] = {1, 2, 3, 4, 5};
    // knows array is pointer
    int *number_ptr = numbers;

    // same as 
    // int value = numbers[2];
    int value = *(numbers + 2);

    int *p = numbers + 2;
    // 3, the value at point numbers[2]
    int value = *p;
}