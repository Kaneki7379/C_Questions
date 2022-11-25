#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} dte;
void display(dte d1[2])
{
    for (int i = 0; i < 2; i++)
    {
        printf("%d/%d/%d \n", d1[i].day, d1[i].month, d1[i].year);
    }
}
int main()
{
    dte d[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the %d date :\n", i + 1);
        scanf("%d", &d[i].day);
        scanf("%d", &d[i].month);
        scanf("%d", &d[i].year);
    }
    display(d);
    int c = 8;
    if (d[0].year > d[1].year)
    {
        c = 0;
    }
    else if (d[0].year < d[1].year)
    {
        c = 1;
    }
    else
    {
        if (d[0].month > d[1].month)
            c = 0;
        else if (d[0].month < d[1].month)
            c = 1;
        else
        {
            if (d[0].day > d[1].day)
                c = 0;
            else if (d[0].day < d[1].day)
                c = 1;
            else
                printf("The dates are same.\n");
        }
    }
    if (c == 1)
        printf("The first date is greater.\n");
    else if(c==0)
        printf("The second date is greater.\n");
    return 0;
}