#include<stdio.h>
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};

struct Node* newNode(int data){
  struct Node* node=(struct Node*)malloc(sizeof(struct Node));
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return node;
}

int main(){
  struct Node *root=newNode(69);
  root->left =newNode(6);
  root->right=newNode(9);
  root->right->right=newNode(1);
  printf("Root = %d Rleft = %d Rright = %d Rrightright = %d",root->data,root->left->data,root->right->data,root->right->right->data);
 return 0;
}
