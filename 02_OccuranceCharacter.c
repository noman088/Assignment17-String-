#include <stdio.h>
int main()
{
    char str[10],a;
    printf("Enter a String");
    gets(str);
    printf("Enter a Character");
    scanf("%c", &a);
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == a)
            count++;
    }
    printf("%d times %c occur", count, a);
    return 0;
}