#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, m, cont, div, par=0, imp=0, somapar=0, somaimpar=0;

    for(cont=0;cont<10;cont++){
        puts("Informe um valor:");
        scanf("%d",&numero);
    
        div = numero%2;

        if(div == 0){
        par++;

        somapar = numero+somapar;

     } else{
        imp++;

        somaimpar = numero+somaimpar;
 
         m = somaimpar/imp;
         }
    }
    
    printf("\nQuantidade Pares:%d\nSoma Pares:%d\n",par,somapar);
    printf("\nQuantidade Ímpares:%d\nMédia:%d\n",imp,somaimpar);
}