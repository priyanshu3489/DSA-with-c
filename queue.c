#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int q[SIZE];
int f=-1, r=-1;

void insert()  //inqueue
{
    int num;
    if(r == SIZE -1)
    {
        printf("q overflow");
    }
    else
    {
        printf("\nEnter the number");
        scanf("%d",&num);
        r++;
        q[r] = num;
        if (f == -1)
        f++;
    }
}
void delete()  //dequeue
{
    int num;
    if(f == -1)
    {
        printf("q empty");
    }
    else
    {
        num = q[f];
        printf("\n%d delete", num);
        if (r == f)
        {
            r= -1;
            f= -1;
        }
        else 
        {
            f++;
        }
    }
}
void display()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("%d  ",q[i]);
    }
}
void search()
{
    int i,Sno,counter=0;
    printf("\nEnter the number");
    scanf("%d",&Sno);
    for(i=f;i<=r;i++)
    {
        if(q[i] != 0)
        {
            counter++;
            if(q[i] == Sno)
            printf("found at %d location\n", counter);
        }
    }
}
void trimQ()
{
    int i,j;
    for(i=f;i<=r;i++)
    {
        if(q[i] != 0)
        {
            break;
        }
    }
    for(j=f;i<=r;j++,i++)
    {
        q[j]=q[i];
    }
    r = j-1;
    display();
}

int main()
{
    int choice;
    while(1)
    { 
        printf("\n0 For Exit\n1 For Insert\n2 For Delete\n3 For Display\n4 For Search\n5 For TrimQ\nPlease Enter Your Choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
                    exit(0);
            case 1:
                    insert();
                    break;
            case 2:
                    delete();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    search();
                    break;
            case 5:
                    trimQ();
                    break;
            default:
                    printf("\nInvalid Choice");
        }
    }
    return 0;
}