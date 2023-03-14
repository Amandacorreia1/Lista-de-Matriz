/*dada a matrix A abaixo, calcule a matriz inversa:
A [1,2]
b[3,4]
*/

#include <stdio.h>
#include <locale.h>

#define T_LIN 2
#define T_COL 2


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
			
	float mat[T_LIN][T_COL];
	int d, dp=1, ds=1;
	float mat_identidade[T_LIN][T_COL];
	float inversa[T_LIN][T_COL];
		
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
	
		printf("\n\n");
		
	for(int i=0; i<T_LIN; i++){//trocar
		for(int j=0; j<T_COL; j++){
		inversa[i][j] = mat[i][j]/d;
		}	
	}

	for(int i=0; i<T_LIN; i++){//dividir os dos elementos pelo determinante
		for(int j=0; j<T_COL; j++){
			if(i==j){
				inversa[i][j] = -inversa[i][j];
			}
		}
	
	}
	
	float aux = inversa[0][0];
	inversa[0][0] = inversa[1][1];
	inversa[1][1] = aux;
	
	printf("Matriz Inversa\n");
		
	for(int i=0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			printf("%.1f\t", inversa[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}


