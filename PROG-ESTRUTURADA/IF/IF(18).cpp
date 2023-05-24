//Faça um programa que receba dois numeros e mostre o maior

#include <iostream>
using namespace std;

int main(){
	
	float num1, num2;
	
	cout<<"Informe o primeiro numero a ser comparado: ";
	cin>>num1;
	
	cout<<"Informe o segundo numero a ser comparado: ";
	cin>>num2;
	
	if(num1>num2){
		cout<<"O numero "<<num1<<" eh maior que "<<num2;  
	}
	
//	if(num1==num2){
//	  	cout<<"O numero "<<num1<<" eh igual ao numero "<<num2;
//	  }	
//isso aqui é pra fazer a parte de igual << conferir se ta correto.
	  
	else{
		cout<<"O numero "<<num1<<" eh menor que o numero "<<num2;
	}
	
	getchar;
	return 0;
}
