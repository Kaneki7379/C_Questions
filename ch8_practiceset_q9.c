#include <stdio.h>
int count(char *str, char ch)
{
    char *ptr = str;
    int c = 0;
    while (*ptr != '\0')
    {
        if (*ptr == ch)
            c++;
        ptr++;
    }
    return c;
}
int main()
{
    char st[] = "virat kohli venue.";
    char c = 'i';
    if (count(st, c) > 0)
        printf("There is %c in given string.", c);
    else
        printf("There is no %c in given string.", c);
    return 0;
}