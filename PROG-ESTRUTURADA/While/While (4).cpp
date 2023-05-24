/*
Faça um programa que apresente o total da soma obtido de N números inteiros, onde N é um número digitado pelo usuário.
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1,quantidade=0;
	float numeros=0,soma=0;
	
	cout<<"\nDigite a quantidade de numeros que deseja somar: ";
	cin>>quantidade;
	cout<<"Você escolheu somar "<<quantidade<<" numeros!\n";
	
	while(contador<=quantidade){
		cout<<"\nDigite o "<<contador<<"° numero: ";
		cin>>numeros;
		
		soma=soma+numeros;
		
		contador++;
	}
	cout<<"\nA soma deu: "<<soma;

	return 0;
}
