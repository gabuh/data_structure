/**
 * Recursividade
 * 
 *functions
 * fseek(), sizeof(verify the size) posi inicial, posicao corrent, posicao final
 * fread(), fwrite
 * (Nro.pesq-1)*sizeof(tamanho do registro),0)
 * 
 * 
 * */
 #include<stdio.h>
 #include<string.h>
 
// fseek();
 
 
int binarySearchRecursive(int vector[],int indexTotal,int value,int start,int B_mid){
  int mid;//---------it wont work
  mid=(start + indexTotal)/2;
  if(value == vector[mid]){
    return mid;
  }
  
  if(mid==B_mid){
  return -1;
  }
  
  B_mid=mid;
  
  if(value > vector[mid] ){
    return binarySearchRecursive(vector,indexTotal,value,mid,B_mid);
  }
  else if(value < vector[mid]){
    return binarySearchRecursive(vector,mid,value,start,B_mid);
  }
}


int binarySearch(int vector[],int indexTotal,int value){
  int start=0;
  int B_mid,mid;
  while(B_mid!=mid){
  B_mid=mid;
  mid=(start + indexTotal)/2;
  if(value == vector[mid]){
    return mid;
  }
  if(value > vector[mid]){
    start=mid;
  }else{
    indexTotal=mid;
  }
  
  }
  return -1;
}

 
 int main(){
   int vector[]={8,18,36,40,50,72,80,83,85,88};
    int value,index;
    
     do{
    scanf("%d",&value);
    index=binarySearchRecursive(vector,9+1,value,0,40);
    if(index>=0){
      printf("\nitem found\n");
    for(int i=0;i<9+1;i++){
      if(i==index){
        printf("v");
        break;
      }else if(vector[i]<=9){
        printf("  ");
      }else if(vector[i]<=99){
        printf("   ");
      }else if(vector[i]<=999){
        printf("    ");
      }
    }
      printf("\n");
    }else{
      printf("\nitem not found\n");
    }
    
  }while(index<0);
  
  for(int i=0;i<9+1;i++){ printf("%d ",vector[i]); }
 
    
    
   
   
   return 0;
 }