#include <stdio.h>

int main(){
    int n, i, y, ant, suc, atual;

    puts("Digite o numero de amostras: ");
    scanf(" %i", &n);

    puts("Digite a primeira amostra: ");
    scanf(" %i", &ant);

    puts("Digite a segunda amostra: ");
    scanf(" %i", &atual);

    for(i = 2; i < n ; i++){
        puts("Digite a proxima amostra: ");
        scanf("%i", &suc);

        y = (ant + atual + suc)/3;

        printf("Y%i = %i\n", i-1, y);

        ant = atual;
        atual = suc;
    }

    return 0;
}