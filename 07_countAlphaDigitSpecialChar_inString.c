// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include <stdio.h>
int main()
{
    int sc = 0, dig = 0, alph = 0;
    char str[20];
    printf("Enter a string ");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 32 & str[i] <= 47 || str[i] >= 58 && str[i] <= 64)
            sc++;
        if (str[i] >= 48 && str[i] <= 57)
            dig++;

        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
            alph++;
    }
    int total = sc + dig + alph;
    printf("Total Number  of alphabet digit and special character is %d", total);
    printf("\nIn Which \n Special Character : %d \n Digit : %d \n Alphabet : %d", sc, dig, alph);
    return 0;
}