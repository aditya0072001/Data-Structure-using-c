#include<stdio.h>

void sort(int arr[],int size){
  int i,j,temp;
    for (i=1;i<size;i++){
      temp=arr[i];
      for(j=i-1;j>=0&&arr[j]>temp;j--){
        arr[j+1]=arr[j];
        //printf("\n%d %d\n",arr[j+1],arr[j]);
    }
  //  printf("\nheheh %d",j);
    arr[j+1] = temp;
}
}

void display(int arr[],int size){
  int k=0;
  for(;k<size;k++){
    printf("%d\t",arr[k]);
  }

}

int main(){
  int g;
  int size=5,arr[5];
  for(g=0;g<size;g++){
    printf("\nEnter %d element\t=",g+1);
    scanf("%d",&arr[g]);
  }
  sort(arr,size);
  display(arr,size);
  return 0;
}
