#include <stdio.h>
#include <stdlib.h>
/*n is no of disks to be moved
s is the source on which disk is placed
d is the destination to which disk is to be moved
i is is the inter mediate between source and destination */
void TOH(int n,char s, char i, char d){
    if(n==1){
        printf("\nMove Disk %d from %c to %c",n,s,d);
    }
    else{
        TOH(n-1,s,d,i);
        printf("\nMove Disk %d from %c to %c",n,s,d);
        TOH(n-1,i,s,d);

    }

}
int main()
{
    int n;
    char A,B,C;
    printf("Enter the no. of Disks to be moved ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}
