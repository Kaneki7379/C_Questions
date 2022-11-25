#include <stdio.h>
void reverse(int *ptr, int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = ptr[i];
        ptr[i] = ptr[n - i - 1];
        ptr[n - i - 1] = temp;
    }
}
void display(int *ptr, int n);
int main()
{
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the marks of student %d :\n", i + 1);
        scanf("%d", &ar[i]);
    }
    reverse(ar, 5);
    display(ar, 5);
    return 0;
}
void display(int *ptr, int n)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d :\n", i + 1);
        printf("%d\n", *ptr);
        ptr++;
    }
}