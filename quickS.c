#include<stdio.h>

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int parition(int arr[],int start,int end){
  int low=start;
  int high=end;
  int pivot=arr[low];
  int i;
  for(i=low+1;i<=high;i++){
    if(arr[i]<pivot){
      swap(&arr[i],&arr[low]);
      low=low+1;
    }
  }
  swap(&pivot,&arr[low]);
  return low;
}

void qsort(int arr[],int low,int high){
  if(low<high){
    int part=parition(arr,low,high);
    qsort(arr,low,part);
    qsort(arr,part+1,high);
  }
}

int main(){
  int ar[10]={10,23,-3,2,-1,-23,5,4,7,8},i;
    qsort(ar,0,9);
  for(i=0;i<10;i++){
    printf("\n %d\n",ar[i]);
  }
  return 0;
}
