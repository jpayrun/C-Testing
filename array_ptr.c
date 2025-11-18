#include<stdio.h>

int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;

int main(void)
{
  // One way to reference the start of the array
  // ptr = &my_array[0];
  // Since the array is a pointer to the start, we can also reference this way
  ptr = my_array;
  printf("\n");
  for (int i = 0; i < 6; i++) {
    printf("my_array[%d] = %d\n", i, my_array[i]);
    // Prints each element of the array
    printf("ptr + %d = %d\n", i, *(ptr + i));
    // Workds as the first one epxected
    // printf("ptr + %d = %d\n", i, *ptr++);
    // Starts at 1 and ends outside the array
    // printf("ptr + %d = %d\n", i, *(++ptr));
  }

  return 0;
}

