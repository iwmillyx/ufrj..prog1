#include <stdio.h>

    int main(){
    float p, q, x, z;
    int y;
    
    printf ("Digite um numero: \n");
    scanf ("%f", &x);
    printf ("Digite outro numero: \n");
    scanf ("%f", &z);
    
        y = z; 
        q = 50 / 30; 
        p = 50.0 / 30; 
        p = 50 / 30.0; 
        z = x / y; 
        y = x / y; 
        
    printf("O valor Y é: %f \n", z);
    printf("O valor Q é: %f \n", q);
    printf("O valor P é: %g \n", p);
    printf("O valor P é: %g \n", p);
    printf("O valor Z é: %g \n", z);
    printf("O valor Y é: %d \n", y);
}