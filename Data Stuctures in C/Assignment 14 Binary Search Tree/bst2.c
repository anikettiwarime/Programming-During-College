#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    struct node* left;
    int item;
    struct node* right;
}node;

void insert(node** r, int data)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->left = NULL;
    newnode->item = data;
    newnode->right = NULL;
    if (*r == NULL)
    {
        printf("\nNode inserted as root\n");
        *r = newnode;
    }
    else
    {
        node* ptr = *r;
        while (1)
        {
            if (ptr->item == data)
            {
                printf("\nDuplicate Value Can't Insert\n");
                free(newnode);
                break;
            }
            else if (data < ptr->item)
            {
                if (ptr->left == NULL)
                {
                    ptr->left = newnode;
                    break;
                }
                else
                    ptr = ptr->left;
            }
            else
            {
                if (ptr->right == NULL)
                {
                    ptr->right = newnode;
                    break;
                }
                else
                    ptr = ptr->right;
            }
        }
    }
}

void inorder(node* root)  //INORDER TRAVERSAL OR VISITING
{
    if (root)
    {
        inorder(root->left);
        printf("%d ", root->item);
        inorder(root->right);
    }
}

void preorder(node* root) //PREORDER TRAVERSAL OR VISITING
{
    if (root)
    {
        printf("%d ", root->item);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root) //POSTORDER TRAVERSAL OR VISITING
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->item);
    }
}

int menu()
{
    int x;
    printf("\n\n1.Insert\n2.Exit\nEnter Your Choice\n");
    scanf("%d", &x);
    return x;
}

int input()
{
    int data;
    printf("\nEnter Data\n");
    scanf("%d", &data);
    return data;
}

int main()
{
    int i = 0;
    node* root=NULL;  //ROOT POINTER
    while (1)
    {
        printf("\nPreorder : ");
        preorder(root);
        printf("\nInorder : ");
        inorder(root);
        printf("\nPostorder : ");
        postorder(root);
        switch (menu())
        {
        case 1:
            insert(&root, input());
            break;
        case 2:
            exit(0);
        default:
            printf("\nInvalid Choice\nRetry!!!");
            break;
        }
    }
}