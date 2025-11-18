#include<stdio.h>

void swap(int *a, int *b);

void printarr(int arr, int len);

int main(void)
{
  int my_array[] = {7, 3, 5, 8, 2, 4};

  int arr_len = sizeof(my_array) / sizeof(my_array[0]);

  for (int j = arr_len - 1; j > 0; j --){
    for (int i = 0; i < j; i++) {
      printf("Compairing %d with %d\n", my_array[i], my_array[i+1]);
      if(my_array[i] > my_array[i+1]) {
        printf("Swapping %d with %d\n", my_array[i], my_array[i+1]);
        swap(&my_array[i], &my_array[i+1]);
      }
    }
  }

  printf("\n");
  for (int i = 0; i < 6; i++){
    printf("%d", my_array[i]);
  }

  printf("\n");

  return 0;
}

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("Swapping %d with %d\n", *a, *b);
}

