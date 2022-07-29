//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area_of_circle(int r)
{
    return (3.14*r*r);
}
int main()
{
    int r;
    float area;
    printf("enter the radius of circle ");
    scanf("%d",&r);
    area = area_of_circle(r);
    printf("area of circle is %f ",area);
    return 0;
}
