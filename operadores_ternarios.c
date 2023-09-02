#include <stdio.h>
//int main(void) {
//
//   int x;
//
//   printf("Digite um inteiro: ");
//    scanf("%d", &x);
//    x = (x % 2 == 1 ) ? 1 : -1;
//
//    if(x == 1){
//    printf("O valor dado eh ímpar.");
//    return 0;
//    }else
//    printf("O valor dado eh par.");
//}

//int main(void) {
//
//   float x;
//
//    printf("Digite um racional: ");
//    scanf("%f", &x);
//    
//    if(x > 0){
//    printf("O valor dado eh positivo.");
//    return 1;
//   }else
//    printf("O valor dado eh negativo ou 0.");
//    return 0;
//}

//int main(void) {
//
//    float x, y, z, m;
//
//    printf("Digite 3 racionais separados por espaço: ");
//    scanf("%f %f %f", &x, &y, &z);
//    
//  m = (x > y) ? ((x > z) ? x : z) : (y > z ? y : z);
//    printf("%f", m);
//  return 0;
//}

//int main(void) {
//
//    float x, y, z, m, n;
//
//    printf("Digite 3 racionais separados por espaço: ");
//    scanf("%f %f %f", &x, &y, &z);
//    
//    m = x > y ? (x > z ? x : z) : y > z ? y : z;
//    n = (x == m) ? (y > z ? y : z) : (y == m) ? (x > z ? x : z) : (x > y ? x : y);
//    
//    printf("%f", (m + n) / 2.0);
//    return 0;
//}

int main(void) {

    char x, resultado;

    printf("Digite uma letra: ");
    scanf("%c", &x);
    
    resultado = (x >= 97 && x <= 122) ? 'm' : (x >= 65 && x <= 90) ? 'M' : '?';
    
    printf("%c", resultado);
    
    return 0;
}
