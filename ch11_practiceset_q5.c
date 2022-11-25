#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=calloc(10,sizeof(int));
    for(int i=0;i<10;i++){
        ptr[i]=7*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value at index %d : %d\n",i,ptr[i]);
    }
    int s=sizeof(int);
    printf("The size of int %d.\n",s);
    realloc(ptr,15*s);
    for(int i=0;i<15;i++){
        ptr[i]=7*(i+1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("The value at index %d : %d\n",i,ptr[i]);
    }
    return 0;
}