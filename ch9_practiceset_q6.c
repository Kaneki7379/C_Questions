#include <stdio.h>
typedef struct complex
{
    int r, i;
} comp;
void display(struct complex e1[5]);
int main()
{
    comp e1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the first complex number :\n");
        printf("Enter the value of real part :\n");
        scanf("%d", &e1[i].r);
        printf("Enter the value of imaginary part :\n");
        scanf("%d", &e1[i].i);
    }
    display(e1);
    return 0;
}
void display(struct complex e1[5])
{
    for (int j = 0; j < 5; j++)
    {
        printf("The %d complex number is : %d + %d i\n", j + 1, e1[j].r, e1[j].i);
    }
}