#include <stdio.h>
#include <stdlib.h>

struct BST
{
    struct BST* left;   //left nodes pointer
    int item;
    struct BST* right;  //right nodes pointer
};
typedef struct BST BST;


void insert(BST** root, int data)
{
    BST* new = (BST*)malloc(sizeof(BST));
    new->right = NULL;
    new->left = NULL;
    new->item = data;
    if ((*root) == NULL)
    {
        printf("Value inserted");
        (*root) = new;
    }
    else
    {
        BST* temp = (*root);
        while (1)
        {
            if (data == temp->item)
            {
                printf("\nDuplicate not allowed\n");
                free(new);
                break;
            }
            else if (data < temp->item)
            {
                if (temp->left == NULL)
                {
                    temp->left = new;
                    break;
                }
                else
                    temp = temp->left;
            }
            else
            {
                if (temp->right == NULL)
                {
                    temp->right = new;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    }
}

void inorder(BST* root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d ", root->item);
        inorder(root->right);
    }
}

void preoder(BST* root)
{
    if (root)
    {
        printf("%d ", root->item);
        preoder(root->left);
        preoder(root->right);
    }
}

BST* find(BST* root,int data)
{
    if(root)
    {
        find(root->left, data);
        if (root->item == data)
            return root;
        find(root->right, data);
    }
}

void postorder(BST* root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->item);
    }
}

void delete(BST** root,int data)
{
    if (*root == NULL)
    {
        printf("\nUnderflow\n");
        return;
    }
    else
    {
        BST* temp = (*root),*temp2=NULL;
        while (temp)
        {
            if (temp->item != data)
                if (data < temp->item)
                {
                    temp2 = temp;
                    temp = temp->left;
                }
                else
                {
                    temp2 = temp;
                    temp = temp->right;
                }
            else
                break;
        }
        if (temp == NULL)
        {
            printf("\nValue not present\nRetry..\n");
            return;
        }
        if (temp->left == NULL && temp->right == NULL) //If leaf node is found
        {
            printf("%d \n", temp2->item);
            if (temp2->left == temp)
            {
                temp2->left = NULL;
                free(temp);
            }
            if (temp2->right == temp)
            {
                temp2->right = NULL;
                free(temp);
            }
        }
        else if ((temp->left == NULL && temp->right != NULL) || (temp->right == NULL && temp->left != NULL))
        {
            if (temp2->left == temp)
            {
                if (temp->left == NULL)
                    temp2->left = temp->right;
                else
                    temp2->left = temp->left;
                free(temp);
            }
            else
            {
                if (temp->left == NULL)
                    temp2->right = temp->right;
                else
                    temp2->right = temp->left;
                free(temp);
            }
        }
        else
        {
            BST* temp3 = temp->right;
            while (temp3->left != NULL)
            {
                temp2 = temp3;
                temp3 = temp3->left;
            }
            temp->item = temp3->item;
            temp2->left = NULL;
            free(temp3);
        }        
    }
}

int menu()
{
    int choice;
    printf("\n\n1.Delete\n2.Exit\nEnter Your choice\n");
    scanf("%d", &choice);
    return choice;
}

int input()
{
    int value;
    printf("Enter Value to delete\n");
    scanf("%d", &value);
    return value;
}

int main()
{
    BST* root=NULL;
    insert(&root, 50);
    insert(&root, 12);
    insert(&root, 16);
    insert(&root, 19);
    insert(&root, 18);
    insert(&root, 14);
    insert(&root, 53);
    insert(&root, 56);
    insert(&root, 58);
    insert(&root, 55);
    insert(&root, 93);
    insert(&root, 80);
    insert(&root, 55);
    insert(&root, 78);

    while (1)
    {
        printf("\nInorder Traversal\n");
        inorder(root);

        printf("\nPreorder Traversal\n");
        preoder(root);

        printf("\nPostorder Traversal\n");
        postorder(root);
        
        switch (menu())
        {
        case 1:
            delete(&root, input());
            break;
        case 2:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    
    return 0;
}