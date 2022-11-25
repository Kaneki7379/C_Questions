#include <stdio.h>
int srtlen(char *st)
{
    int *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[19] = "yash singh";
    int l = strlen(st);
    printf("The length of String is %d", l);
    return 0;
}