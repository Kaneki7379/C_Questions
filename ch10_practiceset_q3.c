#include <stdio.h>

int main()
{
    FILE *ptr,*ptr1;
    ptr = fopen("sample.txt", "r");
    ptr1 = fopen("sample1.txt", "w");
    char ch = getc(ptr);
        while (ch != EOF)
        {
            putc(ch, ptr1);
            putc(ch, ptr1);
            ch = getc(ptr);
        }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}