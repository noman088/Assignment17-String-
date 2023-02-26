// 4. Write a program to convert a given string into uppercase

#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter a string  ");
    gets(str);
    for (int i = 0; str[i]; i++)
    {
        str[i] = str[i] - 32;
        printf("%c", str[i]);
    }

    return 0;
}