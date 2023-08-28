#include <stdio.h>
#include <stdlib.h>

//colocar f nos números também ajuda a não dar erro no código, para não precisar usar o lf na variável.

int main(){
    double salmed,cred;

    puts("Insira o seu saldo médio:");
    scanf("%lf",&salmed);

    if(salmed>=0 && salmed<=200.00){
        printf("Percentual:%.2f\nDevido ao seu saldo, não há um crédito especial.\n",salmed);

    } else if(salmed>=201.00 && salmed<=400.00){
        cred = salmed + (salmed * 0.2);

        printf("Percentual:R$%.2f\nVocê tem o percentual de 20 porcento.\n",cred);

    } else if(salmed>=401.00 && salmed<=600.00){
        cred = salmed + (salmed * 0.3);

        printf("Percentual:R$%.2f\nVocê tem o percentual de 30 porcento.\n",cred);

    } else if(salmed>600.00){
        cred = salmed + (salmed * 0.4);

        printf("Percentual:R$%.2f\nVocê tem o percentual de 40 porcento.\n",cred);
    }
}