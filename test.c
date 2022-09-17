#include <stdio.h>
#define SIZE 5 

int main()
{
    int n[SIZE],search,i,found=0,min=0,max=SIZE-1,mid;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter number:");
        scanf("%d",&n[i]);
    }
    printf("\nEnter the search number:");
    scanf("%d",&search);
    while(min<=max)
    {
        mid = (min+max)/2;
        if(n[mid] == search)
        {
            found=1;
            printf("%d found",search);
            break;
        }
        else if(n[mid]<n[max])
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
