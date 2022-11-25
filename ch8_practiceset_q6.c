#include <stdio.h>
void encrypt(char *str)
{
    char* ptr=str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    *ptr = '\0';
}
void decrypt(char* str){
 char* ptr=str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    *ptr = '\0';
}
int main()
{
    char st[] = "come to this room";
    encrypt(st);
    printf("%s\n", st);
    decrypt(st);
    printf("%s",st);
    return 0;
}