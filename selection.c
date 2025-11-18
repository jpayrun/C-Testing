#include<stdio.h>

void swap(int *a, int *b);
void printarr(int *arr, int len);
void selection(int *arr, int len);

int main(void)
{
  int arr[] = {3, 2, 1, 8, 9, 6, 4};
  // int arr[] = {3, 1, 2};

  int arr_len = sizeof(arr) / sizeof(arr[0]);

  printarr(arr, arr_len);

  selection(arr, arr_len);

  printarr(arr, arr_len);
}

void selection(int *arr, int len)
{
  for (int i = 0; i < len - 1; i++) {
    int min = i;
    for (int j = i+1; j < len; j++){
      //printf("Min is: %d and new value: %d\n", arr[min], arr[j]);
      //printf("%d > %d\n", arr[min], arr[j]);
      if (arr[min] > arr[j]) {
        //printf("Setting min, %d!\n", j);
        min = j;
      }
    }
    //printf("i is %d and min is %d\n", arr[i], arr[min]);
    swap(&arr[i], &arr[min]);
  }
}

void printarr(int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%d", arr[i]);
  }
  printf("\n");
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

