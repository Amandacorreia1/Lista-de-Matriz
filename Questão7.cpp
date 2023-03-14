/* Dada a matriz A abaixo, calcule a matriz diagonal:

A = [    [2, 0, 1],
[3, 4, -2],
[8, 9, 6]   ]

*/

#include<stdio.h>
#include <locale.h>
#define T_LIN 3
#define T_COL 3

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mat[T_LIN][T_COL];
	int d[T_LIN][T_COL];
		
	for(int i = 0; i<T_LIN; i++){//linhas
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor: ", mat[i], j+1);//colunas
			scanf("%d", &mat[i][j]);
	}	
}
	
	printf("\nMatriz original\n");
	for(int i = 0; i<T_LIN; ++i){	//controla as colunas 
		for(int j = 0; j < T_COL; ++j){
			printf("%d\t", mat[i][j]);
	}
		printf("\n\n");
}
    printf("Matriz diagonal:\n\n");
    
   for (int i = 0; i < T_LIN; i++) {// Extrair a matriz diagonal
      	for(int j=0; j<T_COL; j++){
      		if(i==j){	
      			d[i][j] = mat[i][j];	
			}else{
				
			  	d[i][j] = 0;
			}
   
        printf("%d\t", d[i]);
	}
	 
 	printf("\n");
		 
}
   
   return 0;
}
