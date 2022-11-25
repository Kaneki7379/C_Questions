#include <stdio.h>
void display(float s1, float s2, float s3)
{
    if ((s1 > 33) && (s2 > 33) && (s3 > 33))
    {
        float avg = s1 + s2 + s3 / 100;
        if (avg > 40)
            printf("Tohra bitwa pass ho gawa re heera laal.");
        else
            printf("Tohra ladka pass nhi ho pawa.");
    }
    else
    {
        printf("Tohra bituwa 1 vishay me chapa gawa hai.\n");
    }
}
int main()
{
    float sb1, sb2, sb3;
    printf("Enter your marks.\n");
    scanf("%f", &sb1);
    scanf("%f", &sb2);
    scanf("%f", &sb3);
    display(sb1, sb2, sb3);
    return 0;
}