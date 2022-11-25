#include <stdio.h>
void input(int row, int column);
int main()
{
    input(3, 5);
    return 0;
}
void input(int row, int column)
{
    int ar[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value of subject %d of student no. %d \n", j+1, i+1);
            scanf("%d", &ar[i][j]);
        }
    }
    int* ptr=ar;
   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("The value of %d subject of student %d is %d\n", j+1, i+1, *ptr);
            ptr++;
        }
        printf("\n");
    }
}