#include <stdio.h>
#define SIZE 5

void distrib()
{
    int i,j,num[SIZE] = {-5,-4,-3,2,1},pos[SIZE],neg[SIZE],p=0,n=0;
    for(i=0;i<SIZE;i++)
    {
        if(num[i]>0)
        {
            pos[p]=num[i];
            p++;
        }
        else
        {
            neg[n]=num[i];
            n++;
        }
    }
    i=0;
    for(j=0;j<p;j++)
        num[i++]=pos[j];
    for(j=0;j<n;j++)
        num[i++]=neg[j];
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",num[i]);
    }
};
int main()
{
    distrib();
    return 0;
}