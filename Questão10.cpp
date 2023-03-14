/*Dada a matriz A abaixo, calcule a matriz de reflexão em relação ao eixo y:

A = [[1, 2],
[3, 4]]
*/

#include<stdio.h>
#include <locale.h>
#define T_LIN 3
#define T_COL 3

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mat[T_LIN][T_COL];
	int reflexao[T_LIN][T_COL];
	
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
	printf("Matriz de reflexão em relação ao eixo y\n");
	
	for(int i = 0; i<T_LIN; ++i){	 
		for(int j = 0; j < T_COL; ++j){
			
		reflexao[i][j] = mat[i][T_COL-1-j];
			
	}
		printf("\n");
}

	for(int i = 0; i<T_LIN; ++i){	 
		for(int j = 0; j < T_COL; ++j){
			
		printf("%d\t", reflexao[i][j]);
			
	}
		printf("\n\n");
}
	
	
	
	
	return 0;
}
