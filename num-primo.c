#include <stdio.h>
int main(){
    int num, valido;
    valido = 1;
    
    printf("Digite o número que queira verificar se é primo ou não: ");
    scanf("%d", &num);
    if((num % 2 == 0) && (num != 2)){
        valido = 0;
    }
    if((num % 3 == 0) && (num != 3)){
        valido = 0;
    }
    if((num % 5 == 0) && (num != 5)){
        valido = 0;
    }
    if((num % 7 == 0) && (num != 7)){
        valido = 0;
    }
        
    if(valido == 0){
        printf("\nO número não é primo");
    }else{
        printf("\nO número é primo");
    }
    return 0;
}