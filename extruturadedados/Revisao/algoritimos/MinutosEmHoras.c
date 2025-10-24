#include <stdio.h>
int main()
{
  
    int minutos;
    printf("\nDigite a quantidades de minutos: ");
    scanf("%d", &minutos);
    
    
    int horas, resto;
    
    horas = minutos / 60;
    resto = minutos % 60;
    
   printf("%d hora(s) e %d minuto(s)\n", horas, resto);

    return 0;
    
}