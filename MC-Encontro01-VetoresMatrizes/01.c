#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 100

void preencherVetor(int *V);
void verificar(int *V,int N);

int main() {
  int V[TAM],N=0;
  
  preencherVetor(V);
  printf("\nDigite o valor de N: ");
  scanf("%d",&N);
  verificar(V,N);
  return 0;
}

void preencherVetor(int *V){
  int i=0;
  printf("Digite os valores do vetor:\n");
  for(i=0;i<TAM;i++){
    scanf("%d",&V[i]);
  }
}

void verificar(int *V,int N) {
  int aux[TAM]={0},contador=0,i=0,elemento=0;
    
  for (i=0;i<TAM;i++){
    elemento=V[i];
    aux[elemento]++;
  }
    
  for (i=0;i<TAM;i++){
    if(aux[i] == N){
      printf("\nNúmeros que aparecem %d vezes: ", N);
      printf("%d ",i);
      contador++;
    }
  }
  if(contador == 0){
        printf("\nNenhum número aparece %d vezes!",N);
  }
}