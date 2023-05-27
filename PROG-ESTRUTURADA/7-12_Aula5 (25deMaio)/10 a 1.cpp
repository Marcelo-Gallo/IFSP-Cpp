/*
Desenvolver a lógica para um programa que escreva
na tela os números de 10 até 1.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n=10;
	
	while(n<=10){
		
		cout<<n<<" ";
		n--;
		
			if(n==1){
				cout<<n;
				break;
			}
	}

	return 0;
}
