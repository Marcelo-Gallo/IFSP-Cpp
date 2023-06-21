/*
Faça um programa que receba 10 valores em um velor de números reais.
Esses valores representarão o gasto de cada apartamento referente a energia elétrica.
Deseja-se saber qual o maior valor e o número do ap.
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, imaior;
	float maior=0, energia[10];
	
	for(i=0;i<10;i++){
		cout<<"Informe o gasto de energia do "<<i+1<<"° apartamento: ";
		cin>>energia[i];
		if(energia[i]>maior){
			maior=energia[i];
			imaior=i; //lembrar de exibir i+1 para apartamento.			
		}
	}
	cout<<"O maior gasto foi de: "<<maior<<" e veio do "<<imaior+1<<"° apartamento.";
	
	return 0;
}
