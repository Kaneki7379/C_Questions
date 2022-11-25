#include<stdio.h>
#include<math.h>

void cylinder(int r,int h){
       printf("Volume of cylinder :\n%f\n",3.14*pow(r,2)*h);
}
void circle(int r){
    printf("Area of circle :\n%f\n",3.14*pow(r,2));

}
int main(){
    circle(2);
    cylinder(1,2);
    return 0;
}