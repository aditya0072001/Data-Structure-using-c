#include<stdio.h>
#include<conio.h>

struct Node{
  int data;
  struct Node *next;
};

struct Node *start,*last,*fresh;
int reversed=0;

struct Node *new_node(){
  fresh=(struct Node*)malloc(sizeof(struct Node));
  printf("\nEnter data ->");
  scanf("%d",&fresh->data);
  fresh->next=NULL;
  return fresh;
}

void push(){
  if(start==NULL){
    fresh=new_node();
    start=fresh;
    last=fresh;
  }else{
    if(reversed==1){
      fresh=new_node();
      fresh->next=start;
      start=fresh;
    }else{
      fresh=new_node();
      last->next=fresh;
      last=fresh;
    }
  }
}

void reverse(){
  struct Node *temp=NULL,*nextN=NULL;
  fresh=start;
  while(fresh!=NULL){
    nextN=fresh->next;
    fresh->next=temp;
    temp=fresh;
  //  printf("\n%d\t%d\n",temp->data,fresh->data);
    fresh=nextN;
  }
  start=last;
  last=temp;
  temp=start;
  reversed=1;
}
void display(){
  struct Node *temp=NULL;
  temp=start;
  printf("\nDisplaying\n");
  while(temp!=NULL){
    printf("\n%d\n",temp->data);
    temp=temp->next;
  }
}
void pop(){
  if(start==NULL){
    printf("\nStack is Empty\n");
  }else{
    fresh=start;
    start=start->next;
    free(fresh);
  }
}

int main(){
  pop();
  push();
  push();
  push();
  push();
  reverse();
  display();
  pop();
  display();
  push();
  display();
  return 0;
}
