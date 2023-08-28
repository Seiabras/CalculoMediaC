#include <stdio.h>

int a, b, c;
int media;
int maior1, maior2;

int main(){
    printf("Me dê três números:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    
    if(a >= c && b >= c){
        maior1 = a;
        maior2 = b;
    }else if(a >= b && c >= b){
        maior1 = a;
        maior2 = c;
    }else{//else if(b >= a && c >= a){
        maior1 = b;
        maior2 = c;
    }
    
    media = (maior1 + maior2)/2;
    
    printf("O resultado dessa média é: %d", media);
    
    return 0;
}
