#include <stdio.h>

int main(){
    int diaS, ano, mes, dia;

    puts("Insira sua idade em dias:");
    scanf("%d",&diaS);

    ano =  diaS/365;
    mes = (diaS%365)/30;
    dia = (diaS%365)%30;

    printf("Sua idade em anos:%d\tmeses:%d\tdias:%d\n",ano,mes,dia);
}