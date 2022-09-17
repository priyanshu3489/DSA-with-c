#include<stdio.h>
int SIZE = 6;

int main()
{
    int graph[SIZE][SIZE], i, j;
    char v[] = {'A','B','C','D','E','F'};

    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            printf("%c is connected with %c",v[i],v[j]);
            scanf("%d",&graph[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<SIZE;i++)
    {
        printf("\n%c is connected with :",v[i]);
        for(j=0;j<SIZE;j++)
        {
            if (graph[i][j] == 1)
                printf("%c",v[j]);
        }
    }
    return 0;
}