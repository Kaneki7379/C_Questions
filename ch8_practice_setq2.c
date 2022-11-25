#include <stdio.h>

int main()
{
    char st[10] ;
    printf("enter the value of first string\n");
    scanf("%s",st);
    char st2[10];
    char ch;
    int i = 0;
    while (ch != '\n')
    {
        fflush(stdin);
        scanf("%c",&ch);
        st2[i]=ch;
        i++;
    }
    st2[i-1]='\0';
    printf("The value of st is %s\n",st);
    int c=strcmp(st2,st);
    printf("The value of st2 is %s\n %d",st2,c);
    return 0;
}