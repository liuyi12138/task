#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int num;
    struct node*left;
    struct node*right;
}Node;

typedef struct tree
{
    Node *root;
    int size;
}Tree;

typedef struct family
{
    Node *parent;
    Node *child;
}Family;

static Family SeekItem(int n, Tree *ptree);
static void AddItem(int n, Tree*ptree);
static void  DeleteItem(int n, Tree*ptree);
static void DeleteAll(Tree*ptree);
static void deleteall(Node*root);
static void Giveout(Tree*ptree);
static void giveout(Node*root);


int main()
{
    Tree *ptree;
    ptree=(Tree*)malloc(sizeof(Tree));
    int n;
    ptree->size=0;
    printf("We are building the tree,please enter a number.\n");

    while(scanf("%d",&n))
    {
        AddItem(n,ptree);
        printf("please enter a number.('q' to quit)\n");
    }
    printf("The tree is here!(include %d numbers)\n",ptree->size);
    Giveout(ptree);

    int m;
    printf("now,i want to delete some nums,please enter the num.\n");

    while(scanf("%d",&m))
    {
        DeleteItem(m,ptree);
        printf("please enter a number.('q' to quit)\n");
    }


    printf("The new tree is here!(include %d numbers)\n",ptree->size);
    Giveout(ptree);

    DeleteAll(ptree);


    return 0;

}

static Family SeekItem(int n,Tree *ptree)
{
    Family look;
    look.parent=NULL;
    look.child=ptree->root;
    if(look.child==NULL)
        return look;
    while(look.child!=NULL)
    {
        if(n>(look.child->num))
        {
            look.parent=look.child;
            look.child=look.child->right;
        }
        else if(n<(look.child->num))
        {
            look.parent=look.child;
            look.child=look.child->left;
        }
        else
            break;
    }

    return look;
}


static void AddItem(int n, Tree*ptree)
{
    if(SeekItem(n,ptree).child!=NULL)
    {
        printf("The number is in the tree!\n");
        return ;
    }
    Node*new=(Node*)malloc(sizeof(Node));
    new->num=n;
    new->left=NULL;
    new->right=NULL;
    ptree->size++;
    if(ptree->root==NULL)
    {
        ptree->root=new;

    }
    else
    {
        Node*p=ptree->root;
        int Key=1;
        while(Key)
        {
            if(new->num>p->num)
            {
                if(p->right==NULL)
                {
                    p->right=new;
                    Key=0;
                }
                else
                    p=p->right;
            }
            else if(new->num<p->num)
            {
                if(p->left==NULL)
                {
                    p->left=new;
                    Key=0;
                }
                else
                    p=p->left;
            }

        }
    }
    return ;
}

static void  DeleteItem(int n, Tree*ptree)
{
    Family l;
    l=SeekItem(n,ptree);
    Node **f;
    if(l.child==NULL)
    {
        printf("The number is not in the tree!\n");
        return ;
    }
    if(l.parent==NULL)
    {
        Node *m=ptree->root;
        f=&m;
    }
    else if(l.parent->left==l.child)
    {
        f=&(l.parent->left);
    }
    else
    {
         f=&(l.parent->right);
    }

    Node *q;
    ptree->size--;
    if((*f)->left==NULL)
    {
        q=*f;
        *f=(*f)->right;
        free(q);
    }
    else if((*f)->right==NULL)
    {
        q=*f;
        *f=(*f)->left;
        free(q);
    }
    else
    {
        for(q=(*f)->left;q->right!=NULL;q=q->right);
        q->right=(*f)->right;
        q=*f;
        *f=(*f)->left;
        free(q);

    }
    return ;
}

static void DeleteAll(Tree*ptree)
{
    if(ptree!=NULL)
        deleteall(ptree->root);
    ptree->root=NULL;
    ptree->size=0;
}

static void deleteall(Node*root)
{
    Node*pright;
    if(root!=NULL)
    {
        pright=root->right;
        deleteall(root->left);
        free(root);
        deleteall(pright);
    }
    return ;
}

static void Giveout(Tree*ptree)
{
    if(ptree!=NULL)
    {
        giveout(ptree->root);
        printf("\n");
    }

    return ;
}

static void giveout(Node*root)
{
    Node*pright;
    if(root!=NULL)
    {
        printf("%d",root->num);
        pright=root->right;
        giveout(root->left);
        giveout(pright);
    }
    return ;
}










