#include <stdio.h>

int main(){
    float a,b,c,result;

    puts("Insira o valor de A,B e C:");
    scanf("%f %f %f",&a,&b,&c);

    result = ((7*c)+(5*b)) / (2*a*3);

    printf("Resultado:%.2f\n",result);
}