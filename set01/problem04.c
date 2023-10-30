#include<stdio.h>
void input(int *num1,int *num2)
{
   printf("enter the number ");
   scanf("%d",num1);
    printf("enter the number ");
   scanf("%d",num2);
}
void add(int *num1, int *num2,int *result)
{
    *result = *num1 + *num2;
}
void output(int *result)
{
    printf("sum is %d",*result);
}
int main()
{
    int a,b,x,sum;
    input(&a,&b);
    add(&a,&b,&sum);
    output(&sum);
    return 0;
}
