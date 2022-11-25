#include<stdio.h>
int occurence(char* st,char ch);//function prototype
int main(){
    char str[100];
    printf("Enter the desired string :\n");
       gets(str);
    printf("%d",occurence(str,'c'));
    return 0;
}
int occurence(char* st,char ch){
    int c=0;
    char* ptr=st;
    while(*ptr!='\0'){
        if(ch==*ptr)
        c++;//counter for occurence
        ptr++;
    }
    return c;
    }