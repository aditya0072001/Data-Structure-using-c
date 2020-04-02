#include<stdio.h>

void merge(int A[],int lb,int mid,int ub){
  int i=lb;
  int j=mid+1;
  int k=lb;
  int b[100];
  int g;
  while(i<=mid && j<=ub){
    if(A[i]<=A[j]){
      b[k]=A[i];
      i++;
      k++;
    }else{
      b[k]=A[j];
      j++;
      k++;
    }
  }
  if(i>mid){
    while(j<=ub){
      b[k]=A[j];
      j++;
      k++;
    }
  }else{
    while(i<=mid){
      b[k]=A[i];
      k++;
      i++;
    }
  }

  for(g=lb;g<=ub;g++){
    A[g]=b[g];
  }
}

void mergeSort(int A[],int lb,int ub){
  if(lb<ub){
    int mid=(lb+ub)/2;
    mergeSort(A,lb,mid);
    mergeSort(A,mid+1,ub);
    merge(A,lb,mid,ub);
  }
}


int main(){
  int i=0;
  int lol[]={10,203,-1,0,2};
  mergeSort(lol,0,4);
  for(i=0;i<=4;i++){
    printf("%d\n",lol[i]);
  }
  return 0;
}
