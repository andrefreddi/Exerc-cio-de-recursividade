# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <time.h>

int numero;
int aux=0;
int k=0;


int verifica(int n){
	
    if(n==0)
      return 0;
     else
    {
     if(aux==(n %10))
     {
        k++;
     }
     n=n / 10;
     return verifica(n);
    }
    
return 0;

 }
 
int main(){
	
   system("color 3");
   
   printf(" > Digite um numero:\n > ");
   scanf("%d",&numero);
   printf(" > Digite o numero a ser verificado:\n > ");
   scanf("%d",&aux);
   verifica(numero);
   printf(" > Vezes de numeros repetidos:\n > %d",k);
   printf("\n\n");
   system("pause");
   return 0;
}
