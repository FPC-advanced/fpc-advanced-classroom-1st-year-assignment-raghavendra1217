#include<stdio.h>
void input(float *base, float *height)
{
    printf("enter base and height :");
    scanf("%f %f",base,height);
}
void find_area(float base , float height, float *area)
{
    *area=height*base/2;

}
void output(float base, float height, float area)
{
    printf("/n base :%f /n height : %f /n area : %f",base,height,area);
}
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}