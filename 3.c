//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int even_or_odd_detecter(int n){

  if(n%2==0)
    return 1;
  else
    return 0;
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    if(even_or_odd_detecter(n))
        printf("the number %d is even ",n);
    else
        printf("the number %d is odd ",n);

    return 0;
}
