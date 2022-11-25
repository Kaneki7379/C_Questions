#include<stdio.h>

void farenheit(float c){
printf("The value in farenheit is:\n%f\n",(c*9/5)+32);
}
int main(){
    float a;
    printf("Enter the value in celsius:\n");
    scanf("%f",&a);
    farenheit(a);
    return 0;
}