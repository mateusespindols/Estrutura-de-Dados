#include <stdio.h>
int main()
{
  int id;
  
   printf("insira sua idade");
   scanf("%d", &id);
   
   if(id>=18)
{
   printf("\nVocê é maior de idade");
}else {
   printf("\nVocê é menor de idade");

  
}
   return 0; 
}
