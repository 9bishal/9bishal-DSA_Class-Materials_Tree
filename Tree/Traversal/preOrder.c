#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create_node(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        /* code */
        printf("%d ", root->data);
        preOrder(root->left); 
        preOrder(root->right);
    }
}

int main()
{
    struct node *p = create_node(4);
    struct node *p1 = create_node(1);
    struct node *p2 = create_node(6);
    struct node *p3 = create_node(5);
    struct node *p4 = create_node(2);
    // struct node*p5=create_node(14);
    // struct node*p6=create_node(15);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);
    return 0;
}
