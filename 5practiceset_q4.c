#include<stdio.h>
#include<string.h>
int fibonacci(int n);
int main(){
    printf("%d",fibonacci(5));
    return 0;
}
int fibonacci(int n){
    if(n<2)
    return 1;
    else
  return fibonacci(n-2)+fibonacci(n-1);
}