#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int arr_len = 5;

    int *arr = malloc(sizeof(int) * arr_len);

    // int arr_len = sizeof(*arr) / sizeof(arr[0]);

    for (int i = 0; i <= arr_len; i++) {
        arr[i] = i;
    }

    // Big numbers allow for seeing other memorry!
    for (int i = 0; i <= 100000; i++) {
        printf("%d", arr[i]);
    }

    printf("\n");
    return 0;

}
