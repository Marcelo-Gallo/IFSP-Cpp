#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

/*faça um programa em que o usuario deva digitar 7 numeros inteiros
e entao mostrar o valor total da soma dos numeros digitados.*/


//control + espaço abre janela de variaveis

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, num, soma;
	soma=0;
	
	for(i=1;i<=7;i++){
		cout<<"\nDigite um numero: ";
		cin>>num;
		soma=soma+num;
	}
	cout<<"\n\nA soma é: "<<soma;
	
	system("PAUSE");
	return 0;
}
