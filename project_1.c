#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int display(int number, int input)
{
    if (input < number)
    {
        printf("Thoda bada number daliye.\n");
        return 0;
    }
    else if (input > number)
    {
        printf("Thoda chota number daliye.\n");
        return 0;
    }
    else
    {
        printf("Aapne sahi uttar diya Mubarakan !!!\n");
        return 1;
    }
}
int main()
{
    int number1, i, nguesses = 0;
    srand(time(0));
    number1 = rand() % 100 + 1;
    do
    {
        printf("Enter your guess :\n");
        scanf("%d", &i);
        nguesses++;
    } while (display(number1, i)==0);
    printf("The number of guesses is :\n%d",nguesses);
}