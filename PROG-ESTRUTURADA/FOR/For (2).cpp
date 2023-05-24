#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

//criar um programa com laço de repetição de 7x
//em cada vez pedir para digitar um numero inteiro
//e mostrar o numero digitado em seguida

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float numero;
	int i;
	
	for(i=1;i<=7;i++){
	cout<<"\nDigite um numero: ";
	cin>>numero;
	cout<<"O numero digitado foi: "<<numero<<"\n";
	}
	
	system("PAUSE");
	return 0;	
}
