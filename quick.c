#include<stdio.h>
void swap(int *a,int *b){
  int tmp=*a;
  *a=*b;
  *b=tmp;
}

int parition(int A[],int lb,int ub){
  int pivot=A[lb];
  int low=lb;
  int high=ub;
  while(low<high){
    while(A[low]<=pivot){
      low++;
    }
    while(A[high]>pivot){
      high--;
    }
    if(low<high){
      swap(&A[low],&A[high]);
    }
  }
swap(&A[lb],&A[high]);
return high;
}

void quickSort(int A[],int lb,int ub){
  int v;
  if(lb<ub){
    v=parition(A,lb,ub);
    quickSort(A,lb,v-1);
    quickSort(A,v+1,ub);
  }
}
int main(){
  int i;
  int lol[]={12,32,9,-1,-29,-38,0};
  quickSort(lol,0,6);
  for(i=0;i<7;i++){
    printf("%d\n",lol[i]);
  }
  return 0;
}
