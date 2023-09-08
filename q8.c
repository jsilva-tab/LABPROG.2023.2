#include <stdio.h>

int main(){
    float cc,cf;

    puts("Insira o custo de fabrica do carro:");
    scanf("%f",&cf);

    cc = cf+(cf*0.28)+(cf*0.45);

    printf("Custo ao consumidor:%.2f\n",cc);
}