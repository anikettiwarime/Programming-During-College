#include <stdio.h>
#include <stdlib.h>

typedef struct node //bst node
{
    struct node* left; //left nodes address
    int item;
    struct node* right; //right nodes address
}node; 

void insert(node** r, int data)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->right = NULL;
    newnode->item = data;
    newnode->left = NULL;
    
    if (*r == NULL)
    {
        printf("\nNode inserted as root\n");
        *r = newnode;
    }
    else
    {
        node* ptr = *r;
        while (1)
            if (data == ptr->item)
        {
            printf("\n%d Value already exits\n",data);
            free(newnode);
            break;
        }
            else if (data < ptr->item)
            {
            if(ptr->left==NULL)
            {
                ptr->left = newnode;
                break;
            }
            else
                ptr=ptr->left;
        }
        else
        {
            if(ptr->right==NULL)
            
            {
                ptr->right=newnode;
                break;
            }
            else
                ptr=ptr->right;
        }
    }
}

int getRightMin(struct node *root)
{
    node* temp = root;    
    while (temp->left != NULL)
        temp = temp->left;
    return temp->item;
}

struct node* removeNode(struct node* root, int val)
{
    
    if(root == NULL)
        return NULL;    
    if(root->item < val)
        root->right = removeNode(root->right,val);    
    else if(root->item > val)
        root->left = removeNode(root->left,val);    
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            int rightMin = getRightMin(root->right);
            root->item = rightMin;
            root->right = removeNode(root->right,rightMin);
        }
    }
    return root;
}
void inorder(node* root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d ", root->item);
        inorder(root->right);
    }
}

/*
int menu()
{
    int choice;
    printf("\n1.Insert\n2.Delete\n3.Exit\nEnter Your choice\n");
    scanf("%d", &choice);
    return choice;
}

int input()
{
    int data;
    printf("\nEnter Value To insert\n");
    scanf("%d", &data);
    return data;
}
*/

int main()
{
    int a[15]={100,120,150,130,70,65,60,40,75,115,112,172,160,14,90},i=0; // Here I used array to store elements
    node* root = NULL;

    
    while (i < 15)
    {
        insert(&root,a[i]);
        printf("\n%d inserted\n",a[i]);
        printf("\nInorder   : ");
        inorder(root);
        printf("\n");
        i++;
    }
    /*
     while (i >= 0)
    {
        root=removeNode(root,a[i]);
        printf("\n%d deleted\n",a[i]);
        printf("\nInorder   : ");
        inorder(root);
        printf("\n");
        i--;
    }
    /*
    while (1)
    {
        inorder(root);
        switch (menu())
        {
        case 1:
            insert(&root,input());
            break;
        case 2:
            root = removeNode(root, input());
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    }
    */
    
    int x;
    printf("\nEnter Value to delete\n");
    scanf("%d",&x);
    root = removeNode(root, x);
    printf("\nInorder   : ");
    inorder(root);
}
