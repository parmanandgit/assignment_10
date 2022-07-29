//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
 void print_odd_natural(int n)
 {
     for(int i=1;i<=n;i++)
     {
         printf("%d ",2*i-1);
     }

 }
int main()
{   int N;
    printf("enter the value of N ");
    scanf("%d",&N);
    print_odd_natural(N);
    return 0;
}
