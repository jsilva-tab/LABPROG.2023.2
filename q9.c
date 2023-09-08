#include <stdio.h>
#include <math.h>

int main(){
    float x,y,z;

    puts("Insira os valores das variaveis Y e Z (respectivamente):");
    scanf("%f %f",&y,&z);

    x = sqrt(y*(pow(y,22)+pow(z,33)));

    printf("%.2f",x);
}