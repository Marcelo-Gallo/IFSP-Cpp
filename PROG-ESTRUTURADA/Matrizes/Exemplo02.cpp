/*
	Sortear valores numéricos inteiros.
	Ajuda a atribuir valores em matrizes, já que algumas podem ser muito grandes.
*/

#include <iostream>
#include <string.h>
#include <locale.h>
//	novas bibliotecas:
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	//Criação das linhas que criarão os números aleatórios:
	srand(time(NULL));//inicia o rand() baseado no relógio do PC -rand é de random
	
	int matriz[2][2], i, j;
	
	
	for (i=0;i<2;i++){ 
		for (j=0;j<2;j++){ 
			//Fazendo a atribuição automática: 
			matriz[i][j]=rand() %11; //atribui de 0 a 10. (sempre um a mais do meu limite)
		}
	}
	
	cout<<"\nA matriz criada foi: ";
	for (i=0;i<2;i++){
	
		cout<<"\n";
		
		for (j=0;j<2;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	
	return 0;
}
