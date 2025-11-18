#include<stdio.h>

char strA[80] = "A string to be used for demonstration purpose";
char strB[80];

int main(void)
    {
    char *pA; // a pointer to character
    char *pB;
    puts(strA); // print string a
    pA = strA; // assign the pointer to string a
    puts(pA); // string still prints since it is assigned
    pB = strB; / pointer pB is set to string B
    putchar('\n');
    while(*pA != '\0') { // Terminate A at the nul value
     *pB++ = *pA++; // We loop through both a and B and assigne A's value to b
     }
     *pB = '\0'; // Need to assign nul to end of B
     puts(strB); //print b on screen
     return 0;
    }

