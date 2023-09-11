#include <stdio.h>
#include <stdlib.h>

void ImprimirVetor(int k[], int tam);

#define TAM 5

int main(){
    int idade[TAM],maiorD=0;

    puts("Digite as idade:");

    for(int i=0; i<TAM; i++){
        scanf("%d",&idade[i]);

        if(idade[i]>18){
            maiorD++;
        }
    }

    ImprimirVetor(idade,TAM);

    printf("Número de pessoas maiores de 18: %d\n",maiorD);
}

void ImprimirVetor(int k[], int tam){
    for(int i=0; i<TAM;i++){
        printf("%d\t",k[i]);
    }

    printf("\n");
}