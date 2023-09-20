#include<stdio.h>
#include<math.h>

int main (){
  float r1, r2, area;

  printf ("Digite um numero: \n");
  scanf ("%g", &r1);
  printf ("Digite outro numero: \n");
  scanf ("%g", &r2);

  area = 3.14 * (pow (r1, 2) - pow (r2, 2));

  printf ("O valor de x é: %g \n", area);


  return 0;

}//FIM

 -OUTRA ALTERNATIVA-

#include <stdio.h>
#include <math.h>

int main(){
    
    float r1, r2, area;
    
    printf("Digite um número: \n");
    scanf("%g", &r1);
    
    printf("Digite outro número: \n");
    scanf("%g", &r2);
    
    area = 3.14 * (r1 * r1 - r2 * r2);
    
    
    printf("O valor da área é: %g \n", area);
    
    return 0;
    
}


