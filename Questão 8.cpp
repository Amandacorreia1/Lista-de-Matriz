/*Dada a matriz A abaixo, calcule a matriz identidade:

A = [[1, 2],
[3, 4]]
*/

#include<stdio.h>
#include <locale.h>
#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mat[T_LIN][T_COL];
	int identidade[T_LIN][T_COL];
	
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
	printf("\nMatriz Identidade\n\n");
	
	for(int i=0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			if(i==j){
				identidade[i][j] = 1;
			}else{
				identidade[i][j] = 0;
			}
		}
	}
	
	for(int i=0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			printf("%d\t", identidade[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
