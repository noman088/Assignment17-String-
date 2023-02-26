// 6. Write a program to reverse a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("enter a string\n");
    gets(str);
    int s = strlen(str);
    for (int i = 0; i < s / 2; i++, s--)
    {
        int temp = 0;
        temp = str[s - 1];
        str[s - 1] = str[i];
        str[i] = temp;
    }
    printf(" %s", str);

    return 0;
}
