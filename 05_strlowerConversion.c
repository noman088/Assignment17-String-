// 5. Write a program to convert a given string into lowercase
#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter a string  ");
    gets(str);
    for (int i = 0; str[i]; i++)
    {
        str[i] = str[i] + 32;
        printf("%c", str[i]);
    }

    return 0;
}

            //  OR


// #include <stdio.h>
// int main()
// {
//     char str[20];
//     printf("Enter a string  ");
//     gets(str);
//     for (int i = 0; str[i]; i++)
//     {
//         str[i] = str[i] + 32;
//     }
//     printf("your string in upper is like : %s", str);

//     return 0;
// }
