#include<stdio.h>

int main(){
    FILE* ptr;
    ptr=fopen("sample.txt","r");
    if(ptr!=NULL){
    int num1,num2;
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("%d\n",num1);
    printf("%d\n",num2);
    }
    else{
        printf("The file does not exist.");
    }
    return 0;
}