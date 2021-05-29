#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,r,n,sum;
    printf("Enter the First Term of Series ");
    scanf("%f",&a);
    printf("Enter the Common Ratio of Series ");
    scanf("%f",&r);
    printf("Enter the no. of terms in series ");
    scanf("%f",&n);
    sum=a*(pow(r,n)-1)/(r-1);
    printf("\nThe Sum of Series is %f",sum);
    return 0;
}
