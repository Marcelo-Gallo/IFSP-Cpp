/*
	Exercicio03:
	Faça um programa que crie uma matriz 4x2.
	-Preencha com valores aleatórios entre 0 e 12.
	-Calcule a matriz resultante da multiplicação dos elementos da matriz criada pelo seu maior elemento.
	-Mostrar as duas matrizes e o maior elemento.
*/

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int m1[4][2], i, j, maior;
	int m2[4][2];
	
	//criando m1:
	for (i=0; i<4; i++){
		for (j=0; j<2; j++){
			m1[i][j]=rand() %12;
		}
	}
	
	//verificando maior da m1:
	for (i=0; i<4; i++){
		for (j=0; j<2; j++){
			if (m1[i][j]>maior){
				maior=m1[i][j];
			}
		}
	}
	
	//criando m2:
	for (i=0; i<4; i++){
		for (j=0; j<2; j++){
			m2[i][j]=m1[i][j]*maior;
		}
	}
	
	
	cout<<"\nMatriz 1: \n";
	//mostrando m1:
	for (i=0; i<4; i++){
		cout<<"\n";
		for (j=0; j<2; j++){
			cout<<m1[i][j]<<"\t";
		}
	}
	cout<<"\nO maior elemento da matriz 1 é: "<<maior;
	
	cout<<"\n\n\n\nMatriz 2: \n";
	//mostrando m2:
	for (i=0; i<4; i++){
		cout<<"\n";
		for (j=0; j<2; j++){
			cout<<m2[i][j]<<"\t";
		}
	}
	
	return 0;	
}
