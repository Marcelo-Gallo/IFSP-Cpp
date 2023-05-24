#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

/*faça um programa que receba dois numertos reais e mostrea a divisao do primeiro pelo segundo e mostrar o resultado*/
/*se o segundo for zero, mostrar "Divisão impossivel"*/
/*repetir 5 vezes*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float num1, num2, result;
	
	for(i=1;i<=5;i++){
		cout<<"\nDigite o numerador da operação: ";
		cin>>num1;
		cout<<"Digite o divisor da operação: ";
		cin>>num2;
		
			if(num2==0){
			   cout<<"Divisão impossível!\n";
			}
				else{
					result=(num1/num2);
					cout<<"O resultado é: "<<result<<"\n";
				}
	}
	system("PAUSE");
	return 0;
}

