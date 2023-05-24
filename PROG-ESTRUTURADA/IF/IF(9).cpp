//Escreva um programa que receba o valor atual do salario de um funcionário e calcule um aumento de 15%.
//Mostre o valor inicial e o salário com aumento.
//*Nesse caso eu fiz o aumento variável.

#include <iostream>
using namespace std;

int main(){
	
	float salario, aumento, final;
	
	cout<<"Informe o valor do salário: ";
	cin>>salario;
	
	cout<<"Digite o valor do aumento percentual: ";
	cin>> aumento;
	
	final=salario+(salario*(aumento/100));
	
	cout<<"\n\nO valor do salário digitado foi: "<<salario
		<<"\nO valor do aumento percentual foi: "<<aumento
		<<"\nO valor atualizado do salário será: "<<final;
		
		getchar();
		return 0;
	
}
