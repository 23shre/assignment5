#include<stdio.h>
int main()
{
    int dividend,divisor;
    printf("\nEnter dividend and divisor:");
    scanf("%d%d",&dividend,&divisor);

    int q=0,r=0;
    while(dividend>=divisor)
    {
        dividend=dividend-divisor;
        q++;
    }
    r=dividend;

    printf("\nQuotient:%d",q);
    printf("\nRemainder:%d",r);
    return 0;
}