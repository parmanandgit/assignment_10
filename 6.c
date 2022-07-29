//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int n)
{  int fact=1;
    while(n)
    {
     fact =fact*n;
    n--;
    }
    return fact;
}
int main()
{
    int factorial,n;
    printf("enter a number ");
    scanf("%d",&n);
   factorial=fact(n);
   printf("the factorial of %d is %d",n,factorial);
   return 0;
}
