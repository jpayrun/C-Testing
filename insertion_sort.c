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

// Need to point to the values to swap
// We are using a pointer since we are passing by reference, not value
void swap(int *a, int *b) {
  // We derefferene the values to swap them
  // So rather than temp being a point, temp is now a
  int temp = *a;
  // We derefference the pointer so we can change the value
  *a = *b;
  *b = temp;
}

// We have a pointer to the array location as an arguement
void printarr(int *arr, int len){
  for (int i = 0; i < len; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}

