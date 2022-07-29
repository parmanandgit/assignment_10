//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int test(int n,int d)
{int i;
    while(n)
    {
       i=n%10;
       if(i==d)
        return 1;
    n=n/10;
    }
   return 0;
}
int main()
{
    int i,n,d;
    printf(" enter a number ");
    scanf("%d",&n);
    printf(" enter the digit ");
    scanf("%d",&d);
    i=test(n,d);
    if(i)
        printf("yes,%d contains digit %d",n,d);
    else
        printf("no,%d does not contains digit %d",n,d);
    return 0;
}
