#include <stdio.h>

int x, y;

int main(){
    
    //calcular o valor de x e corrigir erros
    printf("Me dê um valor de x: ");
    if(scanf("%d", &x) != 1){
    printf("O que você me deu não é um numero, por favor, escreva um número.");
    return 0;
    }
    
    //calcular o valor de y e corrigir erros
    printf("Agora me dê um valor de y: ");
    if(scanf("%d", &y) != 1){
    printf("O que você me deu como y não um numero, por favor, escreva um número.");
    return 0;
    }
    
    if(x > 0 && y > 0)
        printf("Esse número está no primeiro quadrante.");
    else if(x < 0 && y > 0)
        printf("Esse número está no segundo quadrante.");
    else if(x < 0 && y < 0)
        printf("Esse número está no terceiro quadrante.");
    else if(x > 0 && y < 0)
        printf("Esse número está no quarto quadrante.");
    else if(x == 0 && y != 0)
        printf("Esse número está no eixo y.");
    else if(y == 0 && x != 0)
        printf("Esse número está no eixo x.");
    else //if(x == 0 && y == 0)
        printf("Esse número está na origem, isto é, ele está no eixo x e no eixo y (0,0).");
    


    return 0;
}
