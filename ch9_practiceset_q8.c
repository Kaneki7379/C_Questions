#include <stdio.h>
typedef struct customers
{
    int bnkacc;
    char name[10];
    float salary;
} cust;
void display(cust e2[])
{
    for (int j = 0; j < 5; j++)
    {
        printf("The %d customer bank account , name and salary is : %f , %s \n", j + 1 , 
        e2[j].bnkacc , e2[j].salary , e2[j].name);
    }
}
int main()
{
    cust e1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details of customer :\n");
        printf("Enter the bank account :\n");
        scanf("%d", &e1[i].bnkacc);
        printf("Enter the salary :\n");
        scanf("%f", &e1[i].salary);
        printf("Enter the name :\n");
        scanf("%s", e1[i].name);
    }
    display(e1);
    return 0;
}