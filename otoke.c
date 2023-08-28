#include <stdio.h>
#include <stdlib.h>

int main(){
    double ip;

    puts("Indique o índice de poluição:");
    scanf("%lf",&ip);

    if(ip>=0.05 && ip<=0.29){
        puts("O índice de poluição está aceitável.");

    } else if(ip == 0.3){
        puts("As indústrias do primeiro grupo precisam suspender suas atividades.");

    } else if(ip == 0.4){
        puts("As indústrias do primeiro e segundo grupo precisam suspender suas atividades.");

    } else if(ip == 0.5){
        puts("Todos os grupos precisam suspender suas atividades.");

    } else{
        puts("Índice inválido.");
    }
    
}