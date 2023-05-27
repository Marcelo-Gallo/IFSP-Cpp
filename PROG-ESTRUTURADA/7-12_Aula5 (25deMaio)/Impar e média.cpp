/*
Faça um Programa que escreva na tela os números
ímpares de 0 até 80, e a média dos números pares.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, cont=0, par, soma, contpar, media;
	
	cout<<"Impares até 80: \n";
	
		while(cont<=80){
	
			if(cont%2==0 ){
				soma = soma+cont;
				contpar = contpar + 1;
				cont++;}
			
			
				else{
					cout<<cont<<" ";
					cont++;}		
		}
	
	media = soma/contpar;
	cout<<"\nA média dos pares é: "<<media;
	
	return 0;
	
}
