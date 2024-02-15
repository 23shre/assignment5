#include<stdio.h>
int main()
{
    int i,j,k,l,digits[5];
    printf("\nEnter the 4 digits:");
    for(i=0;i<4;i++)
    scanf("%d",&digits[i]);
    printf("\nThe 4 digit number is:");
    for(i=0;i<4;i++)
    printf("%d",digits[i]);

    //Generating permutations using arrays and loops
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
            for(l=0;l<4;l++)
            {
                if ((digits[i] != digits[j]) && (digits[i] != digits[k]) && (digits[i] != digits[l]) && (digits[j] !=digits[k]) && (digits[j] !=digits[l]) && (digits[k] != digits[l]))
                printf("\n%d%d%d%d", digits[i],digits[j],digits[k],digits[l]);
            }
            }
            }
        }
        return 0;
    }
