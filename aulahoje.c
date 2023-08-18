#include <stdio.h>
#include <stdlib.h>

//resto da divisão

int main(){
    float n1, restodiv;
    scanf("%f",&n1);
    restodiv = ((int)n1%3) + (n1-(int)n1);
    printf("%f \n",restodiv);
}