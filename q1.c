#include <stdio.h>

int main(){
    unsigned char m, r, g, b, b0,b1,b2;

    puts("Digite o valor M: ");
    scanf(" %hhu", &m);

    puts("Digite o valor R: ");
    scanf("%hhu", &r);

    puts("Digite o valor G: ");
    scanf(" %hhu", &g);

    puts("Digite o valor B: ");
    scanf(" %hhu", &b);
    
    b0 = (m>>2) & 1; // Se for 0101 vira 0100
    b1 = (m>>1) & 1;
    b2 =  m & 1;
    
    
    r = (r & 254) | b0; // Se R for 1010 ele vira 1011 ou seja era 10 vira 11
    g = (g & 254) | b1;
    b = (b & 254) | b2;

    printf("R = %hhu\n", r);
    printf("G = %hhu\n", g);
    printf("B = %hhu\n", b);

    return 0;
}

