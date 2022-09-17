#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int num[SIZE];
int main()
{
    int i,search,found=0,min=0,max=SIZE-1,mid;

    printf("Enter the number as per ascii\n");
    for(i=0;i<SIZE;i++)
    {
        printf("Enter number:");
        scanf("%d",&num[i]);
    }
    printf("\nEnter search number:");
    scanf("%d",&search);

    while(min <= max)
    {
        mid = (min+max)/2;
        if(num[mid] == search)
        {
            found=1;
            printf("\n%d found",search);
            break;
        }
        else if(num[mid] < search)
        {
            min = mid+1;
        }
        else
        {
            max = mid;
        }
    }
    if(found == 0)
    {
        printf("\n%d not found",search);
    }
    return 0;
}