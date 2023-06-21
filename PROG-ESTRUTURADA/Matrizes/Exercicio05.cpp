/*
	Faça um programa que crie uma matriz 7x5 com números inteiros criados aleatoriamente de 0 a 10.
	-Some os elementos de cada linha e armazene em um vetor.
	-Multiplique cada elemento da matriz pela soma da linha correspondente no vetor.
	-Mostre a matriz gerada.
	-Mostre o vetor com as somas das linhas.
	-Mostre a matriz resultante.
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
	
	int matriz[7][5], i=0, j=0;
	int vetor[7], soma=0;
	int matriz2 [7][5];
	
	//criar matriz:
	for (i=0;i<7;i++){
		for (j=0;j<5;j++){
			matriz[i][j]=rand() %11;
		}
	}
	
	//criar vetor:
	for (i=0;i<7;i++){
		for (j=0;j<5;j++){
			vetor[i] = vetor[i] + matriz[i][j];
		}
	}
	
	//mostra matriz:
	for (i=0; i<7; i++){
		cout<<"\n";
		for (j=0; j<5; j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	cout<<"\n\nO vetor criado foi: \n";
	//mostra vetor: 
	for (i=0; i<7; i++){
		cout<<vetor[i]<<"\t";
	}
	
	
	//mostra a matriz resultante:
	cout<<"\n\nA matriz resultante é: \n";
	for (i=0; i<7; i++){
		cout<<"\n";
		for (j=0; j<5; j++){
			cout<<(matriz2[i][j]=matriz[i][j]*vetor[i])<<"\t";
		}
	}
	
	
	
	
	return 0;	
}
