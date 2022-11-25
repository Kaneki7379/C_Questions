#include <stdio.h>
void pattern(int n);
int main()
{
    pattern(4);
    return 0;
}
void pattern(int n)
{
    // for (int i = 1; i <= n * 2; i = i + 2)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%c ", '*');
    //     }
    //     printf("\n");
    // }
if(n==1){
    printf("*\n");
    return;
}
pattern(n-1);
for(int i=0;i<(2*n-1);i++){
printf("*");
}
printf("\n");
}