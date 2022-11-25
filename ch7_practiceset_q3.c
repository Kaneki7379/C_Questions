#include <stdio.h>
void table(int n)
{
    int arr[10];
    int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        *ptr = n * (i + 1);
        ptr++;
    }
    ptr = arr;
    for (int j = 0; j < 10; j++)
    {
        printf("%d * %d = %d\n",n, j + 1, *ptr);
        ptr++;
    }
}
int main()
{
    int n;
    printf("Enter a number for table:\n");
    scanf("%d",&n);
    table(n);
    return 0;
}