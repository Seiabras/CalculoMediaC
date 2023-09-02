#include <stdio.h>

#define primeiro 'a'
#define segundo 'b'
#define terceiro 'c'
#define quarto 'd'
#define quinto 'e'

int main() {
    char letra;

    printf("Escolha (a) (b) (c) (d) ou (e) [Se você não gostar de nenhuma das opções, aperte qualquer outra coisa]: ");
    scanf(" %c", &letra); // Usei um espaço antes de %c para ignorar espaços em branco e quebras de linha.

    switch (letra) {
        case primeiro: {
            int p;
            printf("Digite um inteiro: ");
            scanf("%d", &p);
            p = (p % 2 == 1) ? 1 : -1;
            if (p == 1) {
                printf("O valor dado é ímpar.\n");
            } else {
                printf("O valor dado é par.\n");
            }
            break;
        }

        case segundo: {
            float x;
            printf("Digite um racional: ");
            scanf("%f", &x);
            if (x > 0) {
                printf("O valor dado é positivo.\n");
            } else {
                printf("O valor dado é negativo ou 0.\n");
            }
            break;
        }

        case terceiro: {
            float f, y, z, m;
            printf("Digite 3 racionais separados por espaço: ");
            scanf("%f %f %f", &f, &y, &z);
            m = (f > y) ? ((f > z) ? f : z) : (y > z ? y : z);
            printf("%f\n", m);
            break;
        }

        case quarto: {
            float x, y, z, m, n;
            printf("Digite 3 racionais separados por espaço: ");
            scanf("%f %f %f", &x, &y, &z);
            m = x > y ? (x > z ? x : z) : y > z ? y : z;
            n = (x == m) ? (y > z ? y : z) : (y == m) ? (x > z ? x : z) : (x > y ? x : y);
            printf("%f\n", (m + n) / 2.0);
            break;
        }

        case quinto: {
            char x, resultado;
            printf("Digite uma letra: ");
            scanf(" %c", &x);
            resultado = (x >= 'a' && x <= 'z') ? 'm' : (x >= 'A' && x <= 'Z') ? 'M' : '?';
            printf("%c\n", resultado);
            break;
        }

        default:
            printf("Nenhuma resposta foi validada, tchau.\n");
            break;
    }
    return 0;
}