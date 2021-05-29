#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,x;
    printf("Enter the no whose factorial is to be find ");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        a=a*i;
    }
    printf("\nThe Factorial of given no is %d:",a);
    return 0;
}
