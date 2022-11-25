#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sample.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("sample1.txt","w");
    fprintf(ptr,"%d",(num*2));
    fclose(ptr);
    return 0;
}