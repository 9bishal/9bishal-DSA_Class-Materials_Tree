#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create_node(int data){
    struct node* p =(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}

int main(){
    struct node*p=create_node(10);
    struct node*p2=create_node(11);
    struct node*p3=create_node(12);

    p->left=p2;
    p->right=p3;
    return 0;
}
