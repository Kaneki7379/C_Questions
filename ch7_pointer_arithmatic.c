#include<stdio.h>
void inputarray();
void printarray(int *ptr,int n);
int main(){
    inputarray();
    return 0;
}
void inputarray(){
    int ar[5];
    int *ptr=ar;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    printarray(ar,5);
}
void printarray(int *ptr,int n){
    for(int i=0;i<n;i++){
     printf("The value at index %d : %d\n",i+1,*(ptr+i));
    }
}