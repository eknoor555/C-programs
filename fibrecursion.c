#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main()
{
int n;
printf("Enter the no. of terms of Fibonacci to be printed ");
scanf("%d",&n);
printf("\n0\n1");
fib(n-2);
return 0;
}
int fib(n){
if (n>0)
{
static a=0,b=1,c;
c=a+b;
a=b;
b=c;
printf("\n%d", c);
fib(n-1);
}
}
