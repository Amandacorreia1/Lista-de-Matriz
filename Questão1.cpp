//Dada a matriz A abaixo, calcule a matriz transposta:

//A = [[1, 2, 3],
//    [4, 5, 6],
//    [7, 8, 9]]

#include <stdio.h>
#include <locale.h>
#define T_LIN 3
#define T_COL 3

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	

	float num[T_LIN][T_COL];
	float transposta[T_LIN][T_COL];

	for(int i = 0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			printf("Digite os numeros:" );
			scanf("%f", &num[i][j]);
		}
		printf("\n\n");
	}
 	
	for(int i = 0; i<T_LIN; ++i){
		for(int j=0; j<T_COL; ++j){	
		printf("%.2f\t", num[i][j]);
		}
		printf("\n\n");
	}
		
	for(int i = 0; i<T_COL; ++i){
		for(int j=0; j<T_LIN; ++j){	
		transposta[i][j] = num[j][i];
		}

	}

	printf("A matriz transposta: ");
	printf("\n\n");
	
	for(int i = 0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			printf("%.2f\t", transposta[i][j]);
		}
		printf("\n\n");
	}
	
	return 0;
}
