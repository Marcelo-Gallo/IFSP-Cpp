/*
	Exercicio02:
	Faça um programa que receba os valores de uma matriz 2x3 e escreva a localização (linha e coluna) do maior valor.
	-Crie os números aleatóriamente entre 1 e 200.
	-Mostre a matriz criada.
*/

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[2][3], i, j, maior=0, posI, posJ;
	srand(time(NULL));
	
	//gera a matriz
	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			matriz[i][j]=(rand() %200)+1; // (rand() %200)+1 faz não dar zero, indo de 1 a 200;
		}
	}
	
	//verifica a matriz
	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
				posI=i;
				posJ=j;
			}
		}
	}
	
	//mostrando a matriz
	cout<<"A matriz criada foi: ";
	
	for (i=0;i<2;i++){
		cout<<"\n";
		for (j=0;j<3;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	cout<<"\n\nO maior número desta matriz é: "<<maior<<" e se encontra na posição ["<<posI<<"] ["<<posJ<<"]";
	
	
	
	return 0;	
}
