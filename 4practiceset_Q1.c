#include <stdio.h>
void display(int n)
{
    int s = 0;
    int c = 10;
    do
    {
        printf("%d ", n);
        printf("* ");
        printf("%d ", c);
        printf(" = %d\n", n * c);
        s = s + n * c;
        c--;
    } while (c != 0);
    printf("The sum of multiples is:\n%d",s-n*11); 
}
int main()
{
    int nu;
    printf("Enter a number:\n");
    scanf("%d", &nu);
    display(nu);
    return 0;
}