#include<stdio.h>

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
void bubbleS(int arr[],int n){
  int i,j;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
}



int main(){
  int ar[10]={10,23,-3,2,-1,-23,5,4,7,8},i;
  bubbleS(ar,10);
  for(i=0;i<10;i++){
    printf("\n %d\n",ar[i]);
  }
  return 0;
}
