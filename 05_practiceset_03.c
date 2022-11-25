#include <stdio.h>
void display(float a, float b, float c, float d)
{
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%f is the greatest.", a);
            }
            else
            {
                printf("%f is the greatest.", d);
            }
        }
        else if (c > d)
        {
            printf("%f is the greatest.", c);
        }
        else
        {
            printf("%f is the greatest.", d);
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%f is the greatest.", b);
        }
        else
        {
            printf("%f is the greatest.", d);
        }
    }
    else if (c > d)
    {
        printf("%f is the greatest.", c);
    }
    else
    {
        printf("%f is the greatest.", d);
    }
}
int main()
{
    printf("Enter four numbers:\n");
    float a1, b1, c1, d1;
    scanf("%f", &a1);
    scanf("%f", &b1);
    scanf("%f", &c1);
    scanf("%f", &d1);
    display(a1,b1,c1,d1);
    return 0;
}