/*
Faça um programa que receba 2 vetores de 4 posições de números reais.
Calcule a soma dos valores regerentes a cada posição e armazene num terceiro vetor na mesma posição.
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float vetorX[4], vetorY[4], vetorR[4];
	int i;
	
	for(i=0;i<=3;i++){
		cout<<"Digite o valor para a "<<i+1<<"ª posição do vetor X: ";
		cin>>vetorX[i];
		cout<<"Digite o valor para a "<<i+1<<"ª posição do vetor Y: ";
		cin>>vetorY[i];
		//somando
		vetorR[i] = vetorX[i]+vetorY[i];
	}
	
	for(i=0;i<=3;i++){
		cout<<"A soma das "<<i+1<<"ª's casas é: "<<vetorR[i]<<"\n";
	}
	return 0;
}
