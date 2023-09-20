#include <stdio.h>

int main(){
    
    int nota1, nota2, nota3, menor;
    float media;
    printf("Digite um número: \n");
    scanf("%d", &nota1);
    
    printf("Digite outro número: \n");
    scanf("%d", &nota2);
    
    printf("Digite outro número: \n");
    scanf("%d", &nota3);
    
    if(nota1 < nota2 && nota2 < nota3){
        menor = nota1;
    }
     
    else{
        if (nota2 < nota3)
            menor =  nota2;
        else 
            menor = nota3;
    } 
    
    media = (nota1 + nota2 + nota3 - menor) / 2.0;
    
    
    printf("O valor da media é: %.2f \n", media);
    
    return 0;
    
}

