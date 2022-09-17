#include<stdio.h>

void insertData();
void displayData();
void deleteNode();
void search();
void insertAtBegg();
void deleteNodeBegg();
void insertAtAnyAfter();
void insertAtAnyBefore();
void deleteSelectionNode();

struct node
{
    int data;
    struct node *next;
    
} *head = NULL;

int main()
{
    int choice;
    while (1)
    {
        printf("\n0 for exit \n1 for insert \n2 for Display \n3 for delete \n4 for search \n5 for insertAtBeg \n6 for deleteBeg \n7 for insertAtAnyAfter \n8 for insertAtAnyBefore \n9 for deleteSelectionNode\n");
        printf("\nEnter your choice!!");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            insertData();
            break;
        case 2:
            displayData();
            break;
        case 3:
            deleteNode();
            break;
        case 4:
            search();
            break;
        case 5:
            insertAtBegg();
            break;
        case 6:
            deleteNodeBegg();
            break;
        case 7:
            insertAtAnyAfter();
            break;
        case 8:
            insertAtAnyBefore();
            break;
        case 9:
            deleteSelectionNode();
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}


void insertData()
{
    struct node *temp, *p;
    int num;

    printf("\nEnter number");
    scanf("%d", &num);

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        p = head; // we need to search last node
        while (p->next != NULL)
        {
            p = p->next; // p++
        }
        p->next = temp;
    }
}

void displayData()
{
    struct node *p;
    p = head;    
    while(p != NULL)
    {
        printf("%d",p->data);
        p = p->next; //p++
    }
}

void deleteNode()
{
    //last node delete
    struct node *p,*q;
    p = head;
    while (p->next != NULL)
    {
        p = p->next; //p++
    }
    q = head;
    while(q->next != p)
    {
        q = q->next; //q++
    }
    printf("\n%d removed ",p->data);
    free(p);
    q->next = NULL;
}

void search()
{
    struct node *p;
    int num,isFound = 0;
    printf("\nEnter number");
    scanf("%d",&num);
    p = head;
    while(p!=NULL)
    {
        if(p->data == num)
        {
            isFound = 1;
            break;
        }
        p = p->next;
    }
    if(isFound ==0)
    {
        printf("\n%d not present in linkedlist",num);
    }
    else
    {
        printf("\n%d present in linkedlist",num);
    }
}

void insertAtBegg()
{
    int num;
    struct node *temp;
    if(head!=NULL)
    {
        printf("\nEnter number");
        scanf("%d",&num);
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = head;
        head = temp;
    }
    else
    {
        printf("\ncreate at least 1 node");
    }
}

    void deleteNodeBegg()
    {
        struct node *p;
        if(head == NULL)
        {
            printf("\nList is empty");
        }
        else
        {
            p = head;
            head = head->next;
            printf("\n%d remove ",p->data);
            free(p);
        }
    }

void insertAtAnyAfter()
{
    int search,isFound = 0;
    int num;
    struct node *p,*temp;
    printf("\nEnter node data after you want to create new data");
    scanf("%d",&search);
    p = head;
    while(p!=NULL)
    {
        if(p->data == search)
        {
            isFound = 1;
            break;
        }
        p = p->next; // p++
    }
    if(isFound == 1)
    {
        printf("\nEnter new num");
        scanf("%d",&num);
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = p->next;
        p->next = temp;
    }
    else 3
    {
        printf("\nSource Data Invalid");
    }
}

void insertAtAnyBefore()
{
    int search,isFound = 0;
    int num;
    struct node *p,*temp,*q;
    printf("\nEnter node data before you want to create new data");
    scanf("%d",&search);
    p = head;
    while(p!=NULL)
    {
        if(p->data == search)
        {
            isFound = 1;
            break;
        }
        q=p;
        p = p->next; // p++
    }
    if(isFound == 0)
    {
        printf("\nSource data Invalid");
    }
    else if(p==head)
    {
        insertAtBegg();
    }
    else if(isFound == 1)
    {
        printf("\nEnter new number");
        scanf("%d",&num);
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = num;
        q->next= temp;
        temp->next = p;
    }
    else
    {
        printf("\nSMW PTA");
    }
}

void deleteSelectionNode()
{
    int search,isFound = 0;
    struct node *p,*q;
    printf("\nEnter number - deledte");
    scanf("%d",&search);
    p = head;
    while(p !=NULL)
    {
        if(p->data == search)
        {
            isFound = 1;
            break;
        }
        q=p;
        p = p->next;
    }b
    if(isFound == 1)
    {
        printf("\n%d Removed",search);
        q->next = p->next;
        free(p);
    }
    else
    {
        printf("\nNode not found");
    }
}