#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 50

void preencherVetor(int *V);
void verificar(int *V);

int main() {
  int V[TAM];
  
  preencherVetor(V);
  verificar(V);
  
  return 0;
}

void preencherVetor(int *V){
  int i=0;
  printf("Digite os valores do vetor:\n");
  for(i=0;i<TAM;i++){
    scanf("%d",&V[i]);
  }
}

void verificar(int *V){
  int i=0,maior=0,segundo=0;
  for(i=0;i<TAM;i++){
    if(maior<V[i]){
      maior=V[i];
    }
  }
  for(i=0;i<TAM;i++){
    if((segundo<V[i])&&(V[i]!=maior)){
      segundo=V[i];
    }
  }
  printf("Maior %d\n",maior);
  printf("Segundo Maior%d\n",segundo);
  
}
