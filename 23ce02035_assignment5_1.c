#include<stdio.h>
int main()
{
    int n,temp,count=0;
    printf("\nEnter a number:");
    scanf("%d",&n);
    temp=n;

    while (n>0)
    {
        count++;
        n=n/10;
    }
    printf("\nThe no. of digits are %d",count);

    // program for sum of all unique digits 
    int i,j,a[count]; //count as no. of digits=count
    for(i=0;i<count;i++)
    {
        a[i]=temp%10;
        temp=temp/10;
    }
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0; // such that only unique digits are left
            }
        }
    }
    int sum=0;
    for(i=0;i<count;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum of all unique digits in that numberis %d ",sum);
    return 0;
    
    
    
}