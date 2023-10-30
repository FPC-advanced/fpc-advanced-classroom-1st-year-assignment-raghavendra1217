#include<stdio.h>
void input(char *a,char *b)
{
    scanf("%s %s",a,b);
}
int compute(char *a,char *b)
{   int i=0;
    while(a[i]!='\0')
    {
        if(b[i]!='\0')
        {
            if(a[i]!=b[i])
                return -1;
            }

          i++;
        }
        return 1;
    }

void output(int c)
{
    if(c>0)
    {
        printf("both are equal");
    }
    else
    {
        printf("both are not equal ");
    }
}
int main()
{
    char a[30],b[30],c;
    input(a,b);
    c=compute(a,b);
    output(c);

}