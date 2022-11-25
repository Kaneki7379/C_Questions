#include<stdio.h>
char slice(char* str,int n,int m){
    int i=0;
   while(i+n<m){
    str[i]=str[i+n];
    i++;
   }
   str[i]='\0';
}
int main()
{
    char st[15]="YashSinghdfg";
    slice(st,1,8);
    printf("%s",st);
    return 0;
}