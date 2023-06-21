/*
	Exercicio01:
	Crie uma matriz 5x5 com valores aleatórios entre 0 e 150.
	
	Em seguida, peça para o usuário escolher um número entre 0 e 150.
	
	O programa, então, irá verificar se o número digitado está no conjunto de números gerados na matriz.
	Para cada vez que o número for encontrado na matriz, o usuário vai ganhar 10 reais.
	
	Implemente para que seja mostrado:
	-Quantas vezes o número escolhido aparece na matriz.
	-Qual o valor em reais $ que o usuário vai ganhar.
*/

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[5][5], i, j, escolha, aparicao, premio=10;
	srand(time(NULL));
	char resposta[1];
	
	cout<<"===============Cassino do agiota amigo===============";
	cout<<"Deseja testar sua sorte? S para Sim, N para Não: ";
	cin>>resposta;
	
	system("CLS");
	
	while (strcmp(resposta,"s")==0 || strcmp(resposta,"S")==0){
	
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			matriz[i][j]=rand() %151; //0 até 150
		}
	}
	
	cout<<"===============Cassino do agiota amigo===============";
	
	cout<<"\nInforme sua escolha de número: ";
	cin>>escolha;
	cout<<"=====================================================";
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			if(escolha == matriz[i][j]){
			aparicao++;
			}
		}
	}
	
	cout<<"\nO numero escolhido apareceu "<<aparicao<<" vezes na matriz gerada.";
	cout<<"\nO valor ganho foi: R$"<<aparicao*premio;
	
	if(aparicao==0){
		cout<<"\n***Parabens! Você ganhou uma perna quebrada!***";
	}
	
	cout<<"\n";
	
	
	
	//mostrando a matriz p/ confirmar:
	cout<<"\nMatriz de conferência: ";
	for (i=0;i<5;i++){
		cout<<"\n";
		for (j=0;j<5;j++){
			cout<<matriz[i][j]<<"\t"; //0 até 150
		}
	}
	
	
	cout<<"\n=====================================================";
	
	cout<<"\nDeseja fazer outra aposta? S para Sim, N para Não: ";
	cin>>resposta;
	
	system("CLS");
}
	
	return 0;	
}
