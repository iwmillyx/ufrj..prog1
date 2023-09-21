#include <stdio.h>

int main() {
    int voto;
    printf("Digite um número de 1 a 3 para escolher o seu candidato.\n");
    scanf ("%d", &voto);    
        switch(voto) {
            case 1:
            printf("Candidata A - Emilly.\n");
            break;
            
            case 2:
            printf("Candidato B - Izabel .\n");
            break;
            
            case 3:
            printf("Candidata C - Ana Luisa.\n");
            break;
            
            default:
            printf("Seu voto foi anulado, pois vc é um idiota.\n");
            }
        return 0;
}
