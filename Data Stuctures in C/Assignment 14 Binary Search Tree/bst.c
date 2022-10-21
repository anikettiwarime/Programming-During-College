#include <stdio.h>
#include <stdlib.h>
typedef struct node //bst node
{
    struct node* left; //left nodes pointer
    int item;
    struct node* right; //right nodes pointer
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
                printf("\n%d Value already exits\n", data);
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

void delete(node **r,int key)
{
    node* temp;                 //creating two pointer temp for storing prev node and ptr for current node
    node* ptr = *r;             //assigning root value to ptr
    
    if (ptr == NULL)
    {
        printf("\nUnderflow");  // When tree is empty
    }
    else if(ptr->left==NULL && ptr->right==NULL && ptr->item==key)  //when has only one node
    {
        free(ptr);  
        *r=NULL;
        printf("\nRoot Value deleted");
    }
    else
    {
        printf("\nElse part");

        while(ptr!=NULL && ptr->item!=key)
        {
            temp=ptr;
            if(key<ptr->item)          // smaller value case
                ptr=ptr->left;
            else //if(key>ptr->item)     // greater value case
                ptr=ptr->right;
            
        } // End of while

        if(ptr==NULL)
        {
            printf("\nValue not found \nControl returned");
            return;
        }
        else if(ptr->left==NULL && ptr->right==NULL)
        {
            temp=NULL;
            free(ptr);
            printf("\n%d Deleted",key);
        }
    }
}

void preorder(node *root) //preoder transversal
{
    if(root)
    {
        printf("%d ",root->item);
        preorder(root->left);
        preorder(root->right);  
    }
}

void postorder(node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->item);
    }
}

void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d ",root->item);
        inorder(root->right);
    }
}

// void delete(node **r,int data)
// {
//     node *ptr=*r,*ptr2=*r;
//     if(*r==NULL)
//     {
//         printf("\nUnderflow\n");
//     }
//     else if(data==(*r)->item && (*r)->left==NULL && (*r)->right==NULL)
//     {
//         printf("Else if Block");
//         free(*r);
//         *r=NULL;
//     }
//     else
//     {
//         int i=0;
//         while(ptr->item!=data || ptr!=NULL)
//         {
//             printf("%d->%d \n",i,ptr->item);
//             ptr2=ptr;
//             if(data<ptr->item)
//                 ptr=ptr->left;
//             else
//                 ptr=ptr->right;
//                 i++;
//         }
//         printf("Outside loop");
//         if(ptr==NULL)
//         {
//             printf("%d value not found",data);
//         }
//     }
// }

int main()
{
    int a[15]={100,120,150,130,70,65,60,40,75,115,112,172,160,14,90},i=0;
    node *root=NULL;
    while(i<2)
    {
        insert(&root,a[i]);
        printf("\n%d inserted\n",a[i]);
        printf("\nPreorder  : ");
        preorder(root);
        printf("\nInorder   : ");
        inorder(root);
        printf("\nPostorder : ");
        postorder(root);
        printf("\n");
        i++;
    }

    int x;
    printf("\nEnter Value to delete\n");
    scanf("%d",&x);
    delete(&root,x);
    getch();
        

    printf("\nPreorder  : ");
        preorder(root);
        printf("\nInorder   : ");
        inorder(root);
        printf("\nPostorder : ");
        postorder(root);
    while (1)
    {
        char c;
        scanf("%c",&c);
        if(c=='s')
            break;
    }
    
}