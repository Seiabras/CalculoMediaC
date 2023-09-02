#include <stdio.h>

const int media = 5;
int nota1, nota2;

int main(){
    printf("Escreva a primeira nota: ");
    scanf("%d", &nota1);
    printf("Escreva a segunda nota: ");
    scanf("%d", &nota2);
    
    if((nota1 + nota2)/2 >= media)
    printf("APROVADO");
    else
    printf("REPROVADO");
    
    return 0;
}