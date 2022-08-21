
 #include<stdio.h>
 #include<string.h>
  
 
int binarySearchRecursive(int vector[],int indexTotal,int value,int start,int previous_mid){
  int mid;
  mid=(start + indexTotal)/2;
  if(value == vector[mid]){
    return mid;
  }
  
  if(mid==previous_mid){
  return -1;
  }
  
  previous_mid=mid;
  
  if(value > vector[mid] ){
    return binarySearchRecursive(vector,indexTotal,value,mid,previous_mid);
  }
  else if(value < vector[mid]){
    return binarySearchRecursive(vector,mid,value,start,previous_mid);
  }
}


int binarySearch(int vector[],int indexTotal,int value){
  int start=0;
  int previous_mid,mid;
  while(previous_mid!=mid){
  previous_mid=mid;
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