#include <stdio.h>

int main()
{
    int n;
    
    printf("Digite um numero inteiro \n");
    scanf("%d", &n);
    
    n % 2 == 0 ? printf("%d", -1) : printf("%d", 1);
    

    return 0;
}
