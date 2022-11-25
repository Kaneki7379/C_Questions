#include<stdio.h>

int main(){
    int n;
    float sum = 0;
    printf("Enter the number of terms : \n");
    scanf("%d", &n );
    for(float i = 1; i <=n; i++ )
    {
        sum = i + sum;
    }
    printf("The average of numbers is : %f", sum/n);
    return 0;
}