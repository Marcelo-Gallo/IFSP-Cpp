//Faça um programa que leia a idade de uma pessoa expressa em anos, e mostre a idade desta pessoa em "dias".
//Considere que o ano tenha 365 dias.
//Mostre a idade dela em anos e em dias.

#include <iostream>

using namespace std;

int main(){
	
	float anos, dias=365, anosdias;
	
	cout<<"Digite a idade em anos: ";
	cin>>anos;
	
	anosdias=anos*dias;
	
	cout<<"\n\nA idade em anos digitada foi: "<<anos;
	cout<<"\nA idade em dias eh de: "<<anosdias;
	
	getchar();
	return 0;
}

