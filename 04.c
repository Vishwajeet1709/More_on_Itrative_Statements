#include<stdio.h>
int main()
{
    //first n odd natural numbers
    int n,i;
    printf("Enter a number to print n odd natural number :");
    scanf("%d",&n);
    printf("First %d odd natural numbers.\n",n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2 != 0)
            printf(" %d,",i);
    }
    return 0;
}

