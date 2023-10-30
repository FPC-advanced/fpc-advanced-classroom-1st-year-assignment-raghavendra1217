#include<stdio.h>
void input_side(int *a,int *b,int *c)
{
    printf("enter the side :");
    scanf("%d",a);
    printf("enter the side :");
    scanf("%d",b);
    printf("enter the side :");
    scanf("%d",c);
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && a!=c && b!=c)
    {
        return 1;
    }
    else{
    return 0;
    }
}
void output(int isscalene)
{
    if(isscalene==0)
    {
        printf("is not a scalene");
    }
    else
    {
          printf("is scalene");
    }
}
int main()
{
    int a,b,c,isscalene;
    input_side(&a,&b,&c);
    isscalene=check_scalene(a,b,c);
    output(isscalene);
    return 0;
}