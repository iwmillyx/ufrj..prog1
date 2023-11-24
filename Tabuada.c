#include<stdio.h>

int tabuada(int b);       //Assinatura da função tabuada
int main(){
    
    int a;
    
    printf("Digite um número entre 1 e 10: ");
    scanf("%i", &a);
    
    //defesa
    if(a < 1 || a > 10){
        printf("Erro, tente um número entre 1 e 10");
        return 1; //encerra o programa em caso de erro
    }
    
    tabuada(a); //chama a função com o número fornecido pelo usuário
    
    return 0;
}    

//implementação
int tabuada(int b){
    
    printf("O valor da multiplicação de %d por valores de 1 a 10 em ordem crescente:\n", b);
    
    //loop para calcular e imprimir a tabuada do número fornecido
    for( int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", b, i, b*i);  //imprime a multiplicação
    }
}
