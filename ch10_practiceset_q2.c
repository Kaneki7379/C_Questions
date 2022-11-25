#include<stdio.h>

int main(){
    FILE* ptr;
    int num;
    ptr=fopen("sample.txt","w");
    printf("Enter the number to create table :\n");
    scanf("%d",&num);
    for(int i=1;i<11;i++){
        fprintf(ptr,"%d x %d = %d\n",num,i,(num*i));
    }
    fclose(ptr);
    return 0;
}