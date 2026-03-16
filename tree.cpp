#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node create (int n){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->left=NULL;
    newnode->right=NULL;
    return *newnode;
};

void inorder(struct *node *root){
    if(root!=NULL){
        inorder(root->left);
        count<<root;
        inorder(root->right);
    }
}

int main(){
    struct node *root;
    root->left=create(5);
    root->left->left=create(6);
    root->left->right=create(7);
    root->right=create(8);
    root->right->left=create(9);
    root->right->right=create(10);
    cout<<"Tree = ";
    inorder(root);
    return 0;
}