#include <stdio.h>

int main(){
    int ano,mes,dia,conversao;

    puts("Digite sua idade usando anos, mes e dias:");
    scanf("%d %d %d",&ano,&mes,&dia);

    conversao = dia+(ano*365)+(mes*30);

    printf("Sua idade em dias sera:%d\n",conversao);
}