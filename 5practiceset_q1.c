#include <stdio.h>
float average(float a, float b, float c)
{
    float avg = (a + b + c )/ 3;
    return avg;
}
int main()
{
    float n1, n2, n3;
    printf("Enter the three numbers:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    printf("%f", average(n1, n2, n3));
    return 0;
}