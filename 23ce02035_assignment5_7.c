#include<stdio.h>
int main()
{
    int i, j ,x[10],temp;
    printf("\n Enter the array elements: ");
    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
    printf("\n Array elements before sorting : ");
    for(i=0;i<10;i++)
    printf("%d \t ",x[i]);

    //Bubble sort
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(x[j]> x[j+1]) // swapping if the element > next element
            {
                temp= x[j];
                x[j]=x[j+1];
                x[j+1]=temp;

            }
        }
    }
    printf("\n\n The array elements after sorting : ");
    for(i=0;i<10;i++)
    {
        printf("%d \t",x[i]);

    }
    return 0;
    
}