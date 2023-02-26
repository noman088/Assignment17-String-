// 8. Write a program in C to copy one string to another string.
#include <stdio.h>
int main()
{
    char str[100], copy[100];
    printf("Enter  string\n");
    fgets(str, 100, stdin);

    for (int i = 0; str[i]; i++)
    {
        copy[i] = str[i];
    }
    printf("copy string  after copying : %s", copy);

    return 0;
}
