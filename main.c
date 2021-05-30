#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter 1 for finding Divisor and 2 for factorial ");
    scanf("\n%d",&x);
    if(x==1){
    int y;
    printf("Enter the no whose divisor is to be find ");
    scanf("%d",&y);
    for (int i=1;i<=y;i++){
        if(y%i==0){
            printf("\nThe Divisor's of the given no is %d",i);
        }
    }
    }
    else if(x==2){
    int a=1,b;
    printf("Enter the no whose factorial to be find ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        a=a*i;
    }
    printf("%d",a);
    }
    else{
        printf("Idk");
    }
    return 0;
}
