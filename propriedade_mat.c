#include <stdio.h>

int N, c, d, u;

int main(){
    printf("Me dê um número inteiro de três digitos: ");
    
    //não deixar números que não sejam inteiros
    if(scanf("%d", &N) != 1){
        printf("Lê as instruções de novo.\n");
        printf("Só são aceitos numeros inteiros.");
        return 0;
    }
    
    
    //não deixar dar um número que não tenha 3 dígitos
    if(N < 100 || N >=1000){
        printf("Lê as instruções de novo.\n"); 
        printf("Só são aceitos números de 3 dígitos.");
        return 0;
    }
    
    c = N/100;
    printf("\nA centena desse número é: %d\n", c);
    d = (N/10)%10;
    printf("A dezena desse número é: %d\n", d);
    u = N%10;
    printf("A unidade desse número é: %d\n\n", u);
    
    if(c*c*c + d*d*d + u*u*u == N){
    printf("Segundo a proposta, %d = %d^3 + %d^3 + %d^3\n", N, c, d, u);
    printf("Dessa forma, %d = %d + %d + %d\n", N, c*c*c, d*d*d, u*u*u);
    printf("Satisfazendo a condição de %d ser igual a %d.\n", N, c*c*c + d*d*d + u*u*u);
    }else{
    printf("Segundo a proposta, %d = %d^3 + %d^3 + %d^3\n", N, c, d, u);
    printf("Dessa forma, %d = %d + %d + %d\n", N, c*c*c, d*d*d, u*u*u);
    printf("Infelizmente esse número não satisfaz a condição: %d eh diferente de %d", N, c*c*c + d*d*d + u*u*u);
    
    }

    return 0;
}
