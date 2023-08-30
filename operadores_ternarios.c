#include <stdio.h>
int main(void) {

    int x;

    printf("Digite um inteiro: ");
    scanf("%d", &x);
    x = (x % 2 == 1 ) ? 1 : -1;

    if(x == 1){
    printf("O valor dado eh ímpar\n");
    return 0;
    }else
    printf("O valor dado eh par\n");
}
