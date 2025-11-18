#include<stdio.h>

void swap(int *a, int *b);
void printarr(int *arr, int len);
void insertion_sort(int *arr, int len);

int main(void)
{
  int arr[] = {5, 3, 1, 7, 6, 0};

  int arr_len = sizeof(arr) / sizeof(arr[0]);

  printarr(arr, arr_len);

  insertion_sort(arr, arr_len);

  printarr(arr, arr_len);
}

void insertion_sort(int *arr, int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j > 0; j--) {
      if (arr[j] < arr[j-1]) {
        swap(&arr[j], &arr[j-1]);
      } else break;
    }
  }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printarr(int *arr, int len){
  for (int i = 0; i < len; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}

