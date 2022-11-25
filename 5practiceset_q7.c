#include <stdio.h>
void pattern(int n);
int main()
{
    pattern(3);
    return 0;
}
void pattern(int n)
{
    for (int i = 1; i <= n * 2; i = i + 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", '*');
        }
        printf("\n");
    }
}