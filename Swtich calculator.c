#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float a,b,c,d;
    printf("Enter the symbol of operation ");
    scanf("%c",&op);
    printf("Enter the two no's ");
    scanf("%f %f",&a,&b);
switch(op){
case '+':
    printf("\n%f",a+b);
    break;
case '-':
    printf("\n%f",a-b);
    break;
case '*':
    c=a*b;
    printf("\n%f",c);
    break;
case '/':
    d=a/b;
    printf("\n%f",d);
    break;

default:
    printf("Idk");

}
return 0;
}
