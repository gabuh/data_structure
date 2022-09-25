#include <stdio.h>
#include <string.h>
// #include <iostream.h>
void soma10(int x){
  x=x+10;
  printf("Valor de x apos a soma = %d\n",x);
}
void soma15(int *A){
  *A=*A+15;
  printf("Valor de x apos a soma = %d\n",*A);
}

int main(){
  int A=3;
  int *pA=&A;
  soma10(A);
  // soma15(&A);
  
  printf(" &A aponta para o endereco de uma variavel: %p \n",&A);
  // printf("%d\n",pA);
  printf(" *pA aponta para o valor do ponteiro de A: %d\n",*pA);
  // printf("%d\n",*pA);
  printf(" pA aponta para o endereco do pointer: %p\n",pA);
  
  
  // char *y=;
  
  // // printf("O tamanho de y: %d bytes(s)\n",sizeof(y));
  // printf("O endereco de y: %p\n",y);
  // printf("O valor de y: %d\n",*y);
  
// printf("%d \n",point(A));  
  
  
}

