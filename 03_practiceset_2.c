#include <stdio.h>
void display(float tax)
{
    if (tax > 2.5 && tax < 5.0)
        printf("Tax\n5%");
    else if (tax > 5.0 && tax < 10.0)
        printf("Tax\n20%");
    else if (tax > 10.0)
        printf("Tax\n30%");
}
int main()
{
    float t;
    printf("Apna income slab bharo sarkar:\n");
    scanf("%f", &t);
    printf("Tohra Income tax hai:\n");
    display(t);
    return 0;
}