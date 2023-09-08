#include <stdio.h>
#include <math.h>

int main(){
    float x,y,result;

    puts("Insira o valor de x:");
    scanf("%f",&x);
    puts("Insira o valor de y:");
    scanf("%f",&y);

    result = pow(x,y);

    printf("X na potencia de Y = %f\n",result);
}