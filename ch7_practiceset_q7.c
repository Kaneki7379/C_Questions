#include<stdio.h>

void input(int* ptr,int size){
    printf("Enter the value of numbers for printing table :\n");
for(int i = 0; i < size; i++)
{
    scanf("%u",ptr);
    ptr++;
}

}
int main(){
    int size;
    printf("Enter size of numbers for table: \n");
      scanf("%d",&size);
      int n[size];
        int arr[size][10];
      input(n,size);
    for(int i=0;i<3;i++){
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=n[i]*(j+1);
        }
        }
        for (int i = 0; i < size; i++)
        {
            printf("The table of %d :\n",n[i]);
            for (int j = 0; j < 10; j++)
            {
                printf("%d * %d = %d \n",n[i],j+1,arr[i][j]);
            }
            }
         return 0;
}