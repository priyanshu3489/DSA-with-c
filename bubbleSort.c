#include<stdio.h>

int n=7;

int main()
{
    int a[] = {11,2,33,4,5,17,9};
    int i,j,temp,count=1;
    printf("\nArray Before Sorted..\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    for(j=0;j<n-1 && count == 1 ; j++)
    {
        count = 0;
        printf("\n PASS : %d\n",j+1);
        for(i=0;i<n-1-j;i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                count = 1;
            }
        }
        for(i=0;i<n;i++)
        {
            printf(" %d",a[i]);
        }
    }

    printf("\nArray After Sorted..\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}