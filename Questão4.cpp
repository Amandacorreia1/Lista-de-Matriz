/*dada a matrix A abaixo, calcule o determinante:
A [2,3]
b[1,4]
*/

#include <stdio.h>
#include <locale.h>

#define T_LIN 2
#define T_COL 2


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Determinante da matriz\n\n");
			
			
	float mat[T_LIN][T_COL];
	int d, dp=1, ds=1;
	
		
	for(int i = 0; i<T_LIN; i++){//linhas
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor: ", mat[i], j+1);//colunas
			scanf("%f", &mat[i][j]);
		}	
	}
	
	printf("\nMatriz Original\n\n");
	for(int i = 0; i<T_LIN; ++i){	//controla as colunas 
		for(int j = 0; j < T_COL; ++j){
			printf("%.1f\t", mat[i][j]);
		}
		printf("\n");
	}
		for(int i=0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			if(i==j){
				dp*= mat[i][j];
			}
			if((j==T_COL-1) -i){
				ds*=mat[i][j];
			}
		}
	}
	
	d = dp - ds;
	
	printf("\n");
	printf("O determinante da matriz é: %d", d);
	
	return 0;
}


