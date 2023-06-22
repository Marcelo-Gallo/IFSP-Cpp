#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int vetor[13], vetor2[13], i, j=12;
	
	//gerando primeiro vetor:
	for(i=0;i<13;i++){
		vetor[i] = rand() %11;
	}
	
	//mostrando primeiro vetor:
	cout<<"Vetor criado aleatoriamente: \n";
	for(i=0;i<13;i++){
		cout<<"{"<<vetor[i]<<"} ";
	}
	
	//criando segundo vetor:
	for(i=0;i<13;i++){
		vetor2[i] = vetor[j];
		j--;
	}
	
	//mostrando vetor variante:
	cout<<"\nVetor gerado apartir do primeiro: \n";
	for(i=0;i<13;i++){
		cout<<"{"<<vetor2[i]<<"} ";
	}
	
	return 0;
}
