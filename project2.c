#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game(char c, char u)
{
    if (c == u)
    {
        printf("Draw!\n");
    }
    else
    {
        if (c == 'r' && u == 'p')
            printf("You Won!\n");
        else if (c == 'p' && u == 'r')
            printf("You Loose!\n");
        else if (c == 's' && u == 'p')
            printf("You Loose!\n");
        else if (c == 'p' && u == 's')
            printf("You Won!\n");
        else if (c == 'p' && u == 'r')
            printf("You Loose!\n");
        else if (c == 'r' && u == 's')
            printf("You Loose!\n");
        else if (c == 's' && u == 'r')
            printf("You Won!\n");
    }
}
int main()
{
    int num;
    srand(time(0));
    num = (rand() % 100) + 1;
    char c, u;
    printf("Enter r for rock , p for paper, s for scissors.\n");
    scanf("%c", &u);
    if (num < 33)
        c = 'r';
    else if (num > 33 && num < 66)
        c = 'p';
    else if (num > 66 && num < 99)
        c = 's';
    game(c, u);
    printf("You chose %c and computer chose %c\n", u, c);
    return 0;
}