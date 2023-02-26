// Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main()
{
    char ar[20];
    printf("Enter a string");
    gets(ar);
    int s = strlength(ar);
    printf("Lenght is  jo hai wo %d hai", s);
    return 0;
}
int strlength(char *str)
{
    int i;
    for (i = 0; str[i]; i++)
        ;
    return i;
}
