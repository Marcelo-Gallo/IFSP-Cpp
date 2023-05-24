/*
Escreva um algoritimo para ler uma temperatura em graus fahrenheit e mostrar o valor correspondente em graus celsius.
*/
#include <iostream>
using namespace std;

int main(){
	
	float F,C;

	cout<<"Bem vindo ao 'pq só estadunidense usa isso 2000?'";
	
	cout<<"\nDigite a temperatura em Fahrenheit: ";
	cin>>F;
	
	C=(F- 32) *5/9;
	cout<<"A temperatura em Celsius é: "<<C;
	
}
