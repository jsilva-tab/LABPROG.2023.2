#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

int main(){
    char prodqtd[TAM][80],prodnome[TAM][80];
    int i;

   for(i=0;i<TAM;i++){
    puts("Insira a quantidade do produto:");
    gets(prodqtd[i]);
    puts("Insira o nome do produto:");
    gets(prodnome[i]);
   }

   for(i=0;i<TAM;i++){
    printf("Quantidade do produto:%s\tNome do produto:%s\n",prodqtd[i],prodnome[i]);
    }
    
}
