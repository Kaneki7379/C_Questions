#include <stdio.h> //including header file
#include <conio.h>

int main()
{                   // opening of main function
    int a, b, c, n; // declaring variables a,b,c,n
    printf("Enter two values and 1 for add 2 for subtra 3 for multiply and 4 for divide :\n");
    scanf("%d%d%d", &a, &b, &n); // input from user
    switch (n)                   // opening of switch case
    {
    case 1:
        c = a + b; // for addition
        break;

    case 2:
        c = a - b; // for subtraction
        break;
    case 3:
        c = a * b; // for multiplication
        break;
    case 4:
        c = a / b; // for divide
        break;
    default:
        c = 0; // default case
        break;
    }
    printf("The output is : %d\n", c); // printing result
    return 0;
} // end of main