#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int matriz[12][12], i, j;
	int vetor[12];
	
	//criando a matriz com valores aleatorios: 
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			matriz[i][j] = rand() %101;
		}
	}
	
	//pegando os valores da principal:
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(i==j){
				vetor[i] = matriz[i][j];
			}
		}
	}
	
	//mostrando a matriz: 
	cout<<"Matriz gerada: ";
	for(i=0;i<12;i++){
		cout<<"\n";
		for(j=0;j<12;j++){
			cout<<matriz[i][j]<<"    ";
		}
	}
	
	//mostrando vetor dobro da dig. principal da matriz gerada:
	cout<<"\n\nVetor dobro da principal: \n";
	for(i=0;i<12;i++){
	cout<<"{"<<(vetor[i])*2<<"} ";
	}
	
	
	return 0;
}
