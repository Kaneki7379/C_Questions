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
void strcpy(char *str2, char *str1)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}
int main()
{
    char st1[15] = "yash";
    printf("%d\n", strlen(st1));
    char st2[strlen(st1)];
    strcpy(st2, st1);
    printf("%s\n", st2);
    printf("%d", strlen(st2));
    return 0;
}