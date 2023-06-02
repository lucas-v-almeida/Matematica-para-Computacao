#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define linha 4
#define coluna 5

void preencherMatriz(int M[][coluna]);
void verificar(int M[][coluna]);
int primos(int num);

int main() {
  int M[linha][coluna];
  
  preencherMatriz(M);
  verificar(M);
  
  return 0;
}

void preencherMatriz(int M[][coluna]){
  int i=0,j=0;
  printf("Digite os 20 numeros naturais maiores que 1:\n");
  for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
      scanf("%d",&M[i][j]);
    }
  }
}

void verificar(int M[][coluna]){
  int i=0,j=0,nprimos=0;
  for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
      if(primos(M[i][j])){
        nprimos++;
      }
    }
  }
  printf("Quantidade de numeros primos: %d\n", nprimos);
}

int primos(int num){
  int i;
  if(num<=1){
    return 0;
  } 
  for(i=2;i*i<=num;i++){
    if (num%i == 0){
      return 0;
    }
  }
  return 1;
}