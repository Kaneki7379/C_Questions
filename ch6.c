#include<stdio.h>
// int sum(int* a,int* b){
// int temp=*a;
// *a=*b;
// *b=temp;
// }
int main(){
    int a3=2;
    int *b3=&a3;
    int **c3=&b3;
    // sum(&a3,&b3);
    printf("%d\n",a3);
    printf("%u\n",&a3);
    printf("%u\n",b3);
    printf("%u\n",&b3);
    printf("%d\n",*(&b3));
    printf("%u\n",c3);
    return 0;
}
