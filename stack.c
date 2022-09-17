#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int stack[SIZE];
int top=-1;

void push() // insert
{
    int num;
    if(top == SIZE -1)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("\nEnter the number");
        scanf("%d",&num);
        top++;
        stack[top] = num;
    }
}
void pop() // delete
{
    int num;
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        num = stack[top];
        top--;
        printf("\n%d pop", num);
    }
}
void peep() // search
{
    int Pno,loction=1,i;
    printf("Enter the Number:");
    scanf("%d",&Pno);
    for(i=top;i>=0;i--)
    {
        if(stack[i] == Pno)
        {
            printf("found at %d loction",loction);
        }
        else
        {
            loction++;
        }
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\n%d",stack[i]);
    }
}

void strrev()
{
    int i;
    char str[SIZE];
    printf("Enter the string:");
    scanf("%s",&str);
    for(i=0;i<SIZE;i++)
    {
        top++;
        stack[top]=str[i];
    }
    for(top=SIZE-1;top>=0;top--)
    {
        printf("\n%c",stack[top]);
    }
    
}
int main()
{
    int choice;
    while(1)
    { 
        printf("\n\n0 for Exit\n1 For PUSH\n2 For POP\n3 For Display\n4 For Peep\n5 For string reverse\nPlease Enter Your Choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
                    exit(0);
            case 1:
                    push();
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    peep();
                    break;
            case 5:
                    strrev();
                    break;
            default:
                    printf("\nInvalid Choice");
        }
    }
    return 0;
}