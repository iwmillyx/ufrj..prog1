#include <stdio.h>

    int main() {
    int x, y;
    int a, b, c, d, e, f;
    
    printf ("Digite um numero: \n");
    scanf ("%d", &x);
    printf ("Digite outro numero: \n");
    scanf ("%d", &y);
    
        a = x + y;
        b = x - y;
        c = x * y;
        d = x / y;
        e = x % y;
        f = -x;
        
    printf("O valor A é: %d \n", a);
    printf("O valor B é: %d \n", b);
    printf("O valor C é: %d \n", c);
    printf("O valor D é: %d \n", d);
    printf("O valor E é: %d \n", e);
    printf("O valor F é: %d \n", f);
    
    return 0;
} 
