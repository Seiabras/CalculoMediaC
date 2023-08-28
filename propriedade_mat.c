#include <stdio.h>

int N, c, d, u;

int main(){
    printf("Me dê um número inteiro de três digitos: ");
    scanf("%d", &N);
    
    //não deixar dar um número que não tenha 3 dígitos
    if(N <= 99 || N >=1000 || N == float){
        printf("Lê as instuções de novo"); 
        return 0;
    }
    
    //u = N%10
    printf("%d", N);
    

    return 0;
}
