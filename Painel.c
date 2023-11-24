#include<stdio.h>

int totalLEDS(int n);       //ASSINATURA -totalLeds
int ledsAlgarismo(int a);   //ASSINATURA - ledsAlgarismo

int  main(){
    
    int leds;
    
    printf("Digite um número para saber quantos LEDS é necessário: ");
    scanf("%i", &leds);
    
    printf("É necessário %i LEDS para reproduzir o número no painel", totalLEDS(leds));
    
    return 0;
}

//implementação
int totalLEDS(int n){
    
    int total = 0;
    
    while(n > 0){
        total+= ledsAlgarismo( n % 10);
        n/=10;
    }
    
    return total;
}

//implementação num2
int ledsAlgarismo(int a){
    
    int recebe[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; //O dígito 0 requer 6 LEDs; O dígito 1 requer 2 LEDs; O dígito 2 requer 5 LEDs.
    
    return recebe[a];
}
