#include<stdio.h>

// This function will assume str1 has enough allocated space for str2
void concat_strings(char *str1, const char* str2) {
    char temp;
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main(void) {
    // Not a pointer since allocating the space as an array
    char first[50] = "Snek";
    char* second = "land";

    concat_strings(first, second);

    printf("%s\n", second);
    printf("%s\n", first);
}
