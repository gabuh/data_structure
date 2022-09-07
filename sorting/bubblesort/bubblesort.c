#include<stdio.h>
#include<stdlib.h>

#define TAM 5

// int bubbleSortTwo(int array[][],int line,int colu){
//   int temp;
//   for(int i=0;i<line-1;i++){
//     for(int j=0;j<(colu-1)-i;j++){
//     if(array[i][j]<array[i][j+1]){
//       temp=array[i][j+1];
//       array[i][j]=array[i][j+1];
//       array[i][j+1]=temp;
//     }
//     }
//   }
  
//   return -1;
// }

int bubbleSort(int vector[],int size){
  int temp;
  for(int i=0;i<size-1;i++){
    for(int j=0;j<(size-1)-i;j++){
      if(vector[j]<vector[j+1]){
        temp=vector[j];
        vector[j]=vector[j+1];
        vector[j+1]=temp;
        printf("%d -> %d \n",vector[j+1],vector[j]);
      }
    }
  }
  return 0;
}








int main(){
  int A[TAM];

    for(int j=0;j<TAM;j++){
      A[j]=rand()%100;
    }
  
  bubbleSort(A,TAM);
  
    for(int j=0;j<TAM;j++){
      printf("%d ",A[j]);
    }
  printf("\n");
  
  return 0;
}