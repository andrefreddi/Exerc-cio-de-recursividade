# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <time.h>

int main(){

	int n,x, i,resultado = 1, cont;

	system("color 3");
	printf("Digite o numero que ira ser fatorado:\n > ");
	scanf("%d", &x);

	printf("\nDigite o numero que ira ser a potencia:\n > ");
	scanf("%d", &n);

	system("cls");
	
	for(cont = n; cont >= 1; cont--){
			
	resultado = resultado*x;	
		
	}
	
	printf("O valor do fatorial eh: %d\n",resultado);
	
	system("pause");
	return 0;
}
