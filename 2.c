//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float si(int p,int r,int t)
{
    return (p*r*t/100.0);
}
int main()
{
    int p,r,t;
    printf("enter the principal balance ");
    scanf("%d",&p);
    printf("enter the rate ");
    scanf("%d",&r);
    printf("enter the time ");
    scanf("%d",&t);
   float simple_interest;
   simple_interest=si(p,r,t);
   printf("simple interest = %f",simple_interest);

}
