#include<stdio.h>

    int main() {
    //dicionário de dados
    float a, b, x;
    
    //obtém os dois números
    printf("Digite um numero: \n");
    scanf("%g", &b);
    
    printf("Digite outro numero: \n");
    scanf("%g",&a);
    
    if(a==0) {
        printf("não tem raiz");
    }
    
    else {
        x=(-b/a);
      printf("O valor de x eh: %g \n", x);  
    }
    
    return 0;
   } //FIM