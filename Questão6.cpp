#include <stdio.h>
#include <locale.h>

#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mat[T_LIN][T_COL];
	int c[T_LIN][T_COL];
	int aux;
	
	printf("\t\t\t\t\tMATRIZ COFATORA\n\n");
	
	for(int i = 0; i < T_LIN; i++){
		for(int j = 0; j < T_COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nMatriz Original:\n"); 
	for(int i = 0; i < T_LIN; i++) {
	    for(int j = 0; j < T_COL; j++){
	    	printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
  	for(int i = 0; i < T_LIN; i++) {
	    for(int j = 0; j < T_COL; j++) {
	  		c[i][j] = c[i][j];	
		}
	}
	
	for(int i = 0; i < T_LIN; i++) {
	    for (int j = 0; j < T_COL; j++) {
		  	if(j==(T_COL - 1)- i){
		  		c[i][j] = -c[i][j];
		  	}
	    }
	}
	
	aux = c[0][0];
	c[0][0] = c[1][1];
	c[1][1] = aux;
	
	aux = c[0][1];
	c[0][1] = c[1][0];
	c[1][0] = aux;

	printf("\nMatriz Cofatora:\n");
	for(int i = 0; i < T_LIN; i++) {
	    for(int j = 0; j < T_COL; j++){
	    	printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
