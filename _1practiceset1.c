#include <stdio.h>

int area(int l, int b)
{
    return l * b;
}
void display(int l, int b)
{
    printf("The value of area of rectangle :\n%d", area(l, b));
}
int main()
{
    int a, b;
    printf("Enter the length of the rectangle :\n");
    scanf("%d", &a);
    printf("Enter the breadth of the rectangle :\n");
    scanf("%d", &b);
    display(a, b);
    return 0;
}