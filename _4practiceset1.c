#include <stdio.h>

void si(int p, float r, int y)
{
    printf("%f", (p * r * y) / 100.0);
}
int main()
{
    int pr, ye;
    float ra;
    printf("Enter the value of principal rate of interest and number of years:\n");
    scanf("%d", pr);
    scanf("%f", ra);
    scanf("%d", ye);
    si(pr, ra, ye);
    return 0;
}