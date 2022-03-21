//Binary Search Tree.

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
}*newnode,*temp;

//Creation of node.
struct node *create(int value)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    
    return newnode;
}

//Insertion of a node.
struct node *insert(struct node *root,int value)
{
    if(root==NULL)
    {
        return create(value);
    }
    if(root->data>value)
    {
        root->left=insert(root->left,value);
    }
    else if(root->data<value)
    {
        root->right=insert(root->right,value);
    }
    
    
    
    return root;
}

//Inorder Traversal.
void inorder(struct node *root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf("# %d #",root->data);
    inorder(root->right);
    }
    
}

//Preorder Traversal.
void preorder(struct node *root)
{
    if(root!=NULL)
    {
    printf("# %d #",root->data);
    preorder(root->left);
    preorder(root->right);
    }
}

//Postorder Traversal
void postorder(struct node *root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    printf("# %d #",root->data);
    }
}

//Search of an element in a tree.
struct node *search(struct node *root,int val)
{
    if(root==NULL) 
    {
        printf("Element not found.\n");
        return root;
    }
    else if(root->data==val)
    {
        printf("Element found.\n");
        return root;
    }
    else if(val>root->data)
    {
        return search(root->right,val);
    }
    else if(val<root->data)
    {
        return search(root->left,val);
    }
}

//To find the node which contains minimum value.
struct node *find_min(struct node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->left!=NULL)
    {
        return find_min(root->left);
    }
    
    return root;
}

struct node *delete(struct node *root,int item)
{
    if(root==NULL){
        return root;
    }
    else if(root->data>item){
        root->left=delete(root->left,item);
    }
    else if(root->data<item){
        root->right=delete(root->right,item);
    }
    else{
        if (root->left==NULL){
            newnode=root->right;
            free(root);
            return newnode;
        }
        else if(root->right==NULL){
            newnode=root->left;
            free(root);
            return newnode;
        }

        struct node* temp=find_min(root->right);

        root->data=temp->data;

        root->right=delete(root->right,item);
    }
    return root;
}
int main()
{
    int choice=0,item;
    int value,val;
    struct node *root=NULL;
    printf("\nOperations on binary search trees.\n");
    printf("1.Insert().\n");
    printf("2.Inorder().\n");
    printf("3.Preorder().\n");
    printf("4.Postorder().\n");
    printf("5.Search().\n");
    printf("6.Deletion().\n");
    printf("Others:to exit().\n");
    while(choice<=6)
    {
        
        printf("enter u r choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    printf("enter value to insert:\n");
                    scanf("%d",&value);
                    root=insert(root,value);
                    break;
            case 2:
                    inorder(root);
                    break;
            case 3:
                    preorder(root);
                    break;
            case 4:
                    postorder(root);
                    break;
            case 5:
                    printf("enter element to search:\n");
                    scanf("%d",&val);
                    search(root,val);
                    break;
            case 6:
                    printf("enter the element:");
                    scanf("%d",&item);
                    delete(root,item);
                    inorder(root);
        }
    }
}