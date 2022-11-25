#include<stdio.h>
int main ()
 {
    int age;
    printf("enter your age ");
    scanf("%d",&age);
    if (age>18)
    { 
        printf("your are eligible for vote");
         }
    else{ 
        printf("your age not eligible for vote");
       }
       return 0;
 }