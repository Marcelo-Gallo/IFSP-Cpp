//Faça um código para ler as dimensões de um retângulo (Lado1xLado2), depois calcular e escrever
//a area do retângulo

#include <iostream>

using namespace std;

int main(){
	
	float L1,L2,Area;
	
	cout<<"Digite o valor da base: ";
	cin>>L1;
	
	cout<<"Digite o valor da altura: ";
	cin>>L2;
		
	Area=L1*L2;
		
	cout<<"A area do quadrilatero eh: "<<Area;
	
	getchar();
	return 0;	
	
}
