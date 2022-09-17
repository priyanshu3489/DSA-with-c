#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;

}*root=NULL;

struct node* createNode(int num)
{
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

struct node* addNode(int num,struct node *root)//100,(50) | 100,NULL
{
    if(root==NULL)
    {
        root = createNode(num);
    }
    else
    {
        if(root->data > num )
        {
            //left
            root->left =  addNode(num,root->left);//100,NULL
        }
        else
        {
            //right
            root->right =  addNode(num,root->right);//100,NULL
        }
    }   
    return root;
}

void inOrder(struct node *root)
{
    if(root == NULL)
        return;
    inOrder(root->left);      //left-root-right 
    printf("%d  ",root->data);
    inOrder(root->right);
}

void preOrder(struct node *root)
{
    if(root == NULL)
        return;
    printf("%d  ",root->data);
    preOrder(root->left);      //root-left-right
    preOrder(root->right);
}

void postOrder(struct node *root)
{
    if(root == NULL)
        return;
    postOrder(root->left);      //left-right-roo
    postOrder(root->right);
    printf("%d  ",root->data);
}

struct node* deleteNode(struct node* root,int key) //(50,35) => (35,35)
{
    struct node* tmp = NULL;
    if(root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        //left
        //50
        root->left = deleteNode(root->left,key); 
    }
    else if (key > root->data)
    {
        //right
        root->right = deleteNode(root->right,key);
    }
    else if (key == root->data)
    {
        if(root->left == NULL && root->right == NULL)
        {
            //leaf
            free(root);
            return NULL;
        }
        else if(root->left == NULL)
        {
            //node with one child -> right
            tmp = root->right;
            free(root);
            return tmp ;
        }
        else if(root->right == NULL)
        {
            //node with one child -> left
            tmp = root->left;
            free(root);
            return tmp ;
        }
        else
        {
            //node with 2 child
        }
    }
    return root;
}

int main()
{
    int i=1;

    root =  addNode(50,root);//NUL
            addNode(35,root);//50
            addNode(25,root);//35
            addNode(40,root);//35
            addNode(100,root);//50
            addNode(80,root);//100
            addNode(150,root);//100

            //1 for add
            //2 for print
            //print(root);
    /*
    printf("\n%d ",root->data);//50
    printf("\n%d ",root->left->data);//35
    printf("\n%d ",root->left->left->data);//25
    printf("\n%d ",root->left->right->data);//40
    printf("\n%d ",root->right->data);//100
    printf("\n%d ",root->right->right->data);//150
    printf("\n%d ",root->right->right->right->data);//250
    */

    printf("\nIn order\n");
    inOrder(root);
    printf("\nPre order\n");
    preOrder(root);
    printf("\nPost order\n");
    postOrder(root);
    deleteNode(root,25);
    printf("\nIn Order\n");
    inOrder(root);
    deleteNode(root,150);
    printf("\nIn Order\n");
    inOrder(root);
    deleteNode(root,100);
    printf("\nIn Order\n");
    inOrder(root);


    return 0;
} 