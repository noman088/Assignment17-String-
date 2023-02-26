// 3. Write a program to count vowels in a given string
#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter a string");
    gets(str);

    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    printf(" %d vowel  available ", count);
    return 0;
}