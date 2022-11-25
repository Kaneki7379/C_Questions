#include <stdio.h>
void fibonacci(int n)
{
    int a = 0;
    int b = 1, c;
    printf("Fibonacci series is : \n");
    for (int i = 0; i < 10; i++)
    {
    printf(" %d ", a);
    c = a + b;
    b = a;
    a = c;
}
}
int main()
{
   fibonacci(10); 
return 0;
}