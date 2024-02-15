#include<stdio.h>
int main()
{
    int n,sum=0;
    char choice;

    while(1)
    {
        printf("\nEnter the number:");
        scanf("%d",&n);
        
        if (n%2 == 0)
        sum=sum+n; // sum will be increased only if it's even no.

        do{
        printf("\nDo you want to continue?");
        scanf(" %c",&choice);
        if ( choice != 'y' && choice !='Y' &&choice !='n' && choice!='N') 
        printf("\nNot a valid input");
        }while( choice != 'y' && choice !='Y' &&choice !='n' && choice!='N');
        
        if (choice == 'y' || choice =='Y')
        {
            continue;
        }
        else if (choice == 'n' || choice =='N')
        {
            break;
        }
        
    }
    printf("\nThe sum of even integers is %d",sum);
    return 0;
}