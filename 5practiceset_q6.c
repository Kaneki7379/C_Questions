#include<stdio.h>
int sum(int n){
if(n<2){
return 1;
}
else{
return n+sum(n-1);
}
}

int main(){
    printf("%d",sum(4));
    return 0;
}