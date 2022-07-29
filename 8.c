//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
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
    int arrangements,n,r;
    printf("enter the value of n and r respectively ");
    scanf("%d%d",&n,&r);
    arrangements=fact(n)/fact(n-r);
    printf("%d",arrangements);
    return 0;
}
