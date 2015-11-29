#include <stdio.h>
    
int main() {
    
int a, b, c; // comando para representar as variaveis a,b,c
   
scanf("%d", &a); // comando para armazenar a variavel
scanf("%d", &b); // comando para armazenar a variavel
   
    c = b - a; 
    if (b - a < 0) // comando o objetivo de executar todo o codigo que desde que o resultado seja verdad
    c = 24 + b - a;
    if (b == a)
    printf("O JOGO DUROU 24 HORA(S)\n");
 
    else
   
    printf("O JOGO DUROU %d HORA(S)\n", c);
 
    return 0;
 
} 
