#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nomes[5][10];
    int cont;

    for(cont=0;cont<5;cont++){
        printf("Informe o nome %d:",cont);
        gets(nomes[cont]);
    }

    for(cont=0;cont<5;cont++){
        printf("O nome armazenado na posição %d é %s",cont,nomes[cont]);
    }
}