#include <stdio.h>

int main(){
    unsigned char ton, min, max, q;
    unsigned int n, i;
    float x;

    min = 255;
    max = 0;

    puts("Digite a quantidade de tons: ");
    scanf(" %u", &n);

    for(i = 1; i <= n; i++){
        puts("Digite a tonalidade (0 a 255): ");
        scanf(" %hhu", &ton);

        if(ton > max){
            max = ton;
        }
        
        if(ton < min){
            min = ton;        
        }

    }
    if(min == max){
        puts("Error tonalidades iguais");
        return 0;
    }

    puts("Digite a tonalidade a ser normalizada: ");
    scanf(" %hhu", &q);

    x = (float)(q - min)/ (max - min);

    printf("Tonalidade normalizada: %.2f\n", x);

    return 0;
}