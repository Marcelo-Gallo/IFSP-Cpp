//Faça um programa que receba as notas de 3 provas.
//Calcule e mostre a média aritimética.

#include <iostream>
using namespace std;

int main(){
	
	float n1,n2,n3,media;
	cout<<"======================\n";
	cout<<"Bem vindo ao média já!";
	cout<<"\n======================";
	
	cout<<"\n\nDigite a primeira nota: ";
	cin>>n1;
	
	cout<<"\nDigite a segunda nota: ";
	cin>>n2;
	
	cout<<"\nDigite a terceira nota: ";
	cin>>n3;
	
	media=(n1+n2+n3)/3;
	
	cout<<"\n\nA média das 3 provas é: "<<media;
	
	getchar();
	return 0;
}
