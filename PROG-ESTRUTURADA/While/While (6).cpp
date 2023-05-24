/*
Faça um programa que mostre na tela os numeros impares de 0 ate 80;
E a média dos numeros pares de 0 até 80.
Faça usando apenas um while.
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=0,soma=0,par=0;
	
	while(contador<=80){
			
		if(contador%2==0){
			soma=soma+contador;
			par++;
		}
		else{
			cout<<contador<<"\n";
		}
		
		contador++;
	}
	cout<<"\nA média dos pares é: "<<soma/par;
	
	return 0;
}
