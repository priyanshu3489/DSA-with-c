#include <stdio.h>
int main()
{
    int *a;
    int i,max;

    a = (int*)calloc(5,sizeof(int));

    if(a==NULL)
        printf("smw -- TA");
    else
    {
        for(i=0;i<5;i++)
        {
            printf("\nEnter value");
            scanf("%d",a+i);
        }
        max = *a;
        for(i=1;i<5;i++)
        {
            if (max<*(a+i))
            {
                max = *(a+i);
            }
        }
        printf("\nmax = %d",max);
    }
    return 0;
}