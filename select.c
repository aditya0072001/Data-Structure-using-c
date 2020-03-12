#include<stdio.h>

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
void selectS(int arr[],int n){
  int i,j,min;
  for (i = 0; i < n-1; i++)
  {
      min=i;
      for (j = i+1; j < n; j++){
        if (arr[j] < arr[min])
          min = j;
        }
      swap(&arr[min], &arr[i]);
      printf("\narr[i] \t= %d",arr[i]);
  }
}



int main(){
  int ar[10]={10,23,-3,2,-1,-23,5,4,7,8},i;
  selectS(ar,10);
  for(i=0;i<10;i++){
    printf("\n %d\n",ar[i]);
  }
  return 0;
}
