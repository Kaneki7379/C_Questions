#include<stdio.h>
float farenheit(float celsius){
    return celsius*9/5+32;
}
int main(){
    int a1=0;
    float c;
    printf("Enter the value in celsius:\n");
    scanf("%f",&c);
    printf("%f",farenheit(c));
    return 0;
}