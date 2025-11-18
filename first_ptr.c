/* Program 1.1 from PTRTUT10.TXT 6/10/97 */

# include<stdio.h>

int j, k;
int *ptr;

int main(void) 
{
  j = 1;
  k = 2;
  // Setting ptr to 2 the rvalue of k
  // The & allows use to access k address
  ptr = &k;
  printf("\n");
  // void * is casting the pointer to a void pointer for printing
  printf("j has the value of %d and is stored at %p\n", j, (void *)&j);
  printf("k has the value of %d and is stored at %p\n", k, (void *)&k);
  printf("ptr has the value of %d and is stored at %p\n", *ptr, (void *)&ptr);
  printf("The valud of the integer pointed to by ptr is %d\n", *ptr);

  // testing adding 1 to point
  ptr++;
  printf("The next memory address value of ptr %d is at %p\n", *ptr, (void *)&ptr);

  return 0;
}

