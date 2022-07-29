//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
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
    int combination,n,r;
    printf("enter the value of n and r respectively ");
    scanf("%d%d",&n,&r);
    combination=fact(n)/fact(r)/fact(n-r);
    printf("%d",combination);
    return 0;
}
