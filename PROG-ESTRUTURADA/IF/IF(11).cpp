/*
Uma revendedora de carros usados paga a seus funcionários vemdedores um salário fixo por mês  mais 5% sobre o valor
das vendas efetuadas.
Escreva um programa que:
-Receba o valor do salário
-Receba o valor total de carros vendidos pelo vendedor
-Calcule e mostre o salário final
*/

#include <iostream>
using namespace std;

int main(){
	
	float salario,vendas,comissao=0.05,final;
	
	cout<<"Informe o salário do funcionário:R$";
	cin>>salario;
	
	cout<<"Informe o valor das vendas do funcionário:R$";
	cin>>vendas;
	
	final=salario+(vendas*comissao);
	
	cout<<"\n\nO salário do funcionario neste mês é de:R$"<<final;
	
	getchar();
	return 0;
	
}
