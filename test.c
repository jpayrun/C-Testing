#include<stdio.h>

int main(void) {

  char* name;
  int age;

  printf("What is your name? ");
  //scanf("%s", name);
  fgets(name, 50, stdin);
  printf("\n");

  printf("What is your age? ");
  scanf("%d", &age);

  printf("Hello %s\n", name);
  printf("You are %d years old!\n", age);

  return 0;
}

