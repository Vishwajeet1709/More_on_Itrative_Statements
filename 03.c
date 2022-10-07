#include<stdio.h>
int main()
{
    //first n natural numbers in revers order
    int n,i;
    printf("Enter a number to print n natural number in reverse order :");
    scanf("%d",&n);
    printf("First %d  natural numbers in revers order.\n",n);
    for(i=0;i<n;i++)
        printf(" %d,",n-i);
    return 0;
}
