#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char ch[10];
};
void display(struct employee e1)
{
    printf("The employee code is : %d\n", e1.code);
    printf("The employee salary is : %f\n", e1.salary);
    printf("The employee name is : %s\n", e1.ch);
    printf("\n");
}
int main()
{
    struct employee e1[3];
    e1[0].code = 101;
    e1[0].salary = 506000;
    strcpy(e1[0].ch, "Yash");

    e1[1].code = 102;
    e1[1].salary = 706000;
    strcpy(e1[1].ch, "Sheru");

    e1[2].code = 102;
    e1[2].salary = 806000;
    strcpy(e1[2].ch, "Spd");

    display(e1[0]);
    display(e1[1]);
    display(e1[2]);
    return 0;
}