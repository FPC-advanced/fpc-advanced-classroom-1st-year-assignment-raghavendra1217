//   Write a program find whether a number is a composite number
#include<stdio.h>
void input(int *x)
{   printf("enter a number : ");
    scanf("%d",x);
}
int is_composite(int x)
{   int i=1;
    int count=0;
    while(i!=x)
    {
        if(x==(x/i)*i)
        {
            count++;
        }
        i++;
    }
    return count;
}
void output(int n,int r)
{
    if(r>1)
    {
    printf("the number %d is composite",n);
    }
    else
    {
        printf("the number %d is not composite",n);
    }
}
int main()
{
    int x,result;
    input(&x);
    result=is_composite(x);
    output(x,result);
    return 0;
}