#include<stdio.h>
#include<conio.h>

int main(){
  int fighters[5],i,j,remaining=0;
  for(i=0;i<5;i++){
  /*  for(j=i+1;j<5;j=j+2){
      fighters[j]=-1;
       printf("\n%d\n",j);
    } */
    if(i+2<=5){
      fighters[i+2]=-1;
      printf("\n%d\n",i+2);
    }
  }

  for(i=0;i<5;i++){
    if(fighters[i]==-1){
      printf("\n%d is dead\n",i+1);
    }else{
      printf("\nAlive %d\n",i+1);
    }
  //  printf("f2");
  }
  return 0;
}
