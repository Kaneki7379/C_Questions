#include <stdio.h>
typedef struct employee
{
    int salary;
    char name[15];
} emp;
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "w");
    emp e[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of employee %d ::\n", i + 1);
        scanf("%s",e[i].name);
        printf("Enter the salary of employee %d ::\n", i + 1);
        scanf("%d", &e[i].salary);
        fprintf(ptr, "%s , %d\n", e[i].name, e[i].salary);
    }

    fclose(ptr);
    return 0;
}