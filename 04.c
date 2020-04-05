# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <time.h>

void hanoi(int n,char origem,char destino,char auxiliar){

	if(n==1){ 
		printf("\n > Mova o disco 1 da base %c para a base %c",origem ,destino);
		return;
	}
	
	hanoi(n-1,origem,auxiliar,destino);


	printf("\n > Mova o disco %d da base %c para a base %c",n,origem,destino);
	hanoi(n-1,auxiliar,destino,origem);
}

main(){
	int n;
	
	system("color 3");
	
	printf(" > Digite o numero de discos para ser organizados :\n > ");
	scanf("%d",&n);
	
	system("@cls||clear");
	
	
	hanoi(n,'A','C','B');
	printf("\n");
	
	return 0;
}
