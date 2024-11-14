#include<stdio.h>
#include<stdlib.h>

struct node{
    /* data */
    int data;
    struct node* left;
    struct node* right;
};

int main(){
    //it can be considered as a root node or a first node
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=10;
    p->left=NULL;
    p->right=NULL;

    //creating the second node
    struct node* p1=(struct node*)malloc(sizeof(struct node));
    p1->data=10;
    p1->left=NULL;
    p1->right=NULL;

    //creating the third node
    struct node* p2=(struct node*)malloc(sizeof(struct node));
    p2->data=10;
    p2->left=NULL;
    p2->right=NULL;
    //linking the node
    p->left=p1;
    p->right=p2;
    return 0;

}
