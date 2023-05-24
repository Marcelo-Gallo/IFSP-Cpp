/*
Faça um programa que receba um número qualquer.
Mostre em seguida:
-O valor do seu antecessor
-O valor do número digitado
-O valor do seu sucessor
*/

#include <iostream>
using namespace std;

int main(){
	
	float antecessor,numero,sucessor;	
	
	cout<<"=====================================\n";
	cout<<"!!!Bem vindo ao ante&suce-sor 2000!!!";
	cout<<"\n=====================================";
	cout<<"\n\nDigite o número!: ";
	cin>>numero;
	sucessor=numero+1;
	antecessor=numero-1;
	
	cout<<"O antecessor do número digitado é: "<<antecessor;
	
	cout<<"\nO número digitado é: "<<numero;
	
	cout<<"\nO sucessor do número digitado é: "<<sucessor;
	
}
