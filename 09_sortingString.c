// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter a String");
    fgets(str, 50, stdin);
    for (int i = 0; str[i]; i++)
        for (int j = 0; j < str[j]; j++)
            if (str[i] < str[j])
            {
                char temp;
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
    printf("Sorted String is => %s", str);
    return 0;
}
