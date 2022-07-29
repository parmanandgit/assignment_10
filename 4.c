//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
 void print_natural(int n)
 {
     for(int i=1;i<=n;i++)
     {
         printf("%d ",i);
     }

 }
int main()
{   int N;
    printf("enter the value of N ");
    scanf("%d",&N);
    print_natural(N);
    return 0;
}
