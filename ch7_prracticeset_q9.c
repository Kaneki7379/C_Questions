#include <stdio.h>

int main()
{
    int arr[3][4][9];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 9; k++)
                printf("The address of arr[%d][%d][%d] is %u : \n", i, j, k, &arr[i][j][k]);

    return 0;
}