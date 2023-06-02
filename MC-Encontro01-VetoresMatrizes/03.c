#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define linha 10
#define coluna 10

void preencherMatriz(int M[][coluna]);
void verificar(int M[][coluna]);

int main() {
  int M[linha][coluna];
  
  preencherMatriz(M);
  verificar(M);
  
  return 0;
}

void preencherMatriz(int M[][coluna]){
  srand(time(NULL));
  int i=0,j=0;
  for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
      M[i][j]=rand()%50;
      printf("%d ",M[i][j]);
    }
    printf("\n");
  }
}

void verificar(int M[][coluna]){
  int i=0,j=0,cont=0;
  for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
      if((i==j)&&(M[i][j]!=1)){
        cont++;
      }
      if((i!=j)&&(M[i][j]!=0)){
        cont++;
      }
    }
  }
  if(cont==0){
    printf("\nA matriz é identica!\n");
  }else{
    printf("\nA matriz não é identica!\n");
  }
}