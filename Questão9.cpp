/*Dada a matriz A abaixo, calcule a matriz de rotação de 90 graus:

A = [[1, 2],
[3, 4]]

*/

#include<stdio.h>
#include <locale.h>
#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int ib=0, jb=0;
	
	int mat[T_LIN][T_COL];
	int B[ib][jb];
		
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
	printf("Matriz de rotação de 90 graus\n\n");
	
	for(int j=0; j<T_COL; j++){//controla as colunas
		jb =0;
		for(int i=T_LIN-1; i>=0; i--){//controla as linhas
			B[ib][jb] = mat[i][j];
			printf("[%d, %d]= %d\t\t", ib, jb, B[ib][jb]);
			jb++;	
		}
		printf("\n");
		ib++;
	}
	return 0;
}
