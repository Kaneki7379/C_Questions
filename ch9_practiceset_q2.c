#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} e1;
struct vector sumvector(struct vector v1, struct vector v2)
{
    int result = v1.x + v2.x;
    int result1 = v1.y + v2.y;
    printf("The sum of vector is : %di + %dj",result,result1);
};

int main()
{
    e1 ve1, ve2;
    ve1.x = 7;
    ve1.y = 5;

    ve2.x = 9;
    ve2.y = 8;
     
    sumvector(ve1,ve2);
    return 0;
}