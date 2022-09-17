#include<stdio.h>

int n = 7;

int main()
{

    int a[] = {10,2,3,19,7,6,4};
    int i,j,sort;

    printf("\nArray Before Sorted...\n");
    for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }

    for(i=1;i<n;i++)
    {
        sort = a[i];
        for(j=i-1;j>=0;j--)
        {
            if(sort<a[j])
            {
                a[j+1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1] = sort;
    }
    
    printf("\nArray After Sorted...\n");
    for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }
    return 0;
}