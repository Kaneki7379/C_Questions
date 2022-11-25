#include<stdio.h>
typedef struct employee {
    float salary;
    int code;
    char name[100];
       }e1;
       void show(struct employee e1){
        printf("The employee code is %d\n",e1.code);
       printf("The employee code is %f\n",e1.salary);
       printf("The employee name is %s\n",e1.name);
       }
int main(){
      e1 harry;
      e1 *ptr;
      ptr=&harry;
      ptr->code=132;
      ptr->salary=56000.0;
      strcpy(ptr->name,"harry");
      show(harry);
    return 0;
}