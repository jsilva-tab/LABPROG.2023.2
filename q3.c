#include <stdio.h>

int main(){
    float n1,n2,n3,n4,n5,soma,prod;
    float media;

    puts("Insira cinco valores inteiros:");
    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);

    soma = n1+n2+n3+n4+n5;
    prod = n1*n2*n3*n4*n5;
    media = soma / 5;

    printf("Soma:%.2f\tProduto:%.2f\tMedia:%.2f\n",soma,prod,media);
}