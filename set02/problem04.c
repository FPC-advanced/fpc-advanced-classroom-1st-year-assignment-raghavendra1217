#include<stdio.h>
void input_array_size(int *x)
{   printf("enter array sie : ");
    scanf("%d",x);
}
void input_array(int n, int *a)
{   printf("enter array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int *a)
{
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=1;j<a[i];j++)
        {
            if(a[i]==(a[i]/j)*j)
            {
                count++;
            }
            }
    }
j
}
void output(int sum)
{
    printf("sum of composite number = %d",sum);
}
int main()
{
    int x;
    input_array_size(&x);
    int a[x];
    input_array(x,a);
    int sum=sum_composite_numbers(x,a);
    output(sum);
 

}