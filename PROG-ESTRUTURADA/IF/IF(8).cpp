//Faça um programa que receba o preço de um produto.
//Depois receba a quantidade que foi comprada do produto.
//em seguida mostre:
//-o preço digitado
//-a quantidade digitada
//-o valor total a pagar

#include <iostream>
using namespace std;

int main(){
	
	float preco, quantidade, total;
	
	cout<<"Digite o preço do produto: R$";
	cin>>preco;
	
	cout<<"Digite a quantidade do produto: ";
	cin>>quantidade;
	
	total=preco*quantidade;
	
	cout<<"\n\n\nO preco do produto comprado eh de: R$"<<preco<<"\nA quantidade do produto eh: "
	    <<quantidade<<"\nO total da compra foi de: R$"<<total;
	    
	getchar();
	return 0;
	
}
