#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the no whose divisor is to be find ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if(a%i==0){
            printf("\nThe Divisor's of the given no is %d",i);
        }
    }
    return 0;
}
