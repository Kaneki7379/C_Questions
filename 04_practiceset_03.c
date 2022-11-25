#include<stdio.h>
void display(char ch){
    int an=ch;
    if(an<92)
    printf("The charater is in upper case.");
    else
    printf("The character is in lower case.");
}
int main(){
    char chh;
    printf("Enter the character:\n");
    scanf("%c",&chh);
    display(chh);
    return 0;
}