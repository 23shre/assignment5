#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of the triangle n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        //print spaces before the stars
        for (int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //print stars for each row
        for (int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");  // next line after each row
    }
    return 0;
}