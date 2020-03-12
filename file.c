#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node {
  char data;
  struct Node *next;
};
struct Node *start=NULL,*last=NULL,*fresh=NULL;

void writetoFile(){
  FILE *fptr;
  fptr = fopen("text.txt","w");
  for(fresh=start;fresh!=NULL;fresh=fresh->next){
    fprintf(fptr,"%c",fresh->data);
  }
  fclose(fptr);
}

int main(){
  int choice;
  do{
    printf("\nEnter 1 for entering text\nEnter 3 to save to file\nEnter 2 to exit\n");
    scanf("%d",&choice);
    fresh=(struct Node*)malloc(sizeof(struct Node));
    if(choice==1){
      printf("\nPress 'x' to end entering text\n");
      while(fresh->data=getchar()){
        if(start==NULL){
          start=fresh;
          last=fresh;
        }else{
          fresh->next=NULL;
          last->next=fresh;
          last=fresh;
        }
        if(fresh->data=='x'){
          free(fresh);
          break;
        }else if((int)fresh->data==10){
          fresh->data='\n';
        }
        fresh=(struct Node*)malloc(sizeof(struct Node));
        fresh->next=NULL;
      
      }
    }
    else if(choice==2){
      break;
    }else if(choice==3){
      writetoFile();
    }
  }while(choice!=2);
  return 0;
}
