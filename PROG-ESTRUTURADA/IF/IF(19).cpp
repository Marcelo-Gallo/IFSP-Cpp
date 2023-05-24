//

#include <iostream>
#include <string.h>
using namespace std;


int main(){
	//vamos declarar as variaveis
	float altura; //em centimetros
	//vamos declarar a variável string
	char nome[30];
	float pesoIdeal;
	char sexo[1];
	
	//vamos receber esses valores
	cout<<"Digite seu nome: \n";
	cin>>nome;
	
	cout<<"Digite sua altura: \n";
	cin>>altura;
	
	cout<<"Digite seu sexo (M ou F): \n";
	cin>>sexo;
	
	//vamos verificar se o valor é F ou M
	if(strcmp(sexo,"M")==0){
		pesoIdeal=((72.2*altura)-58);
		cout<<"O peso ideal é: "<<pesoIdeal<<"kg\n";
	}
	
	else{
		pesoIdeal=((62.1*altura)-44.7);
		cout<<"O peso ideal é: "<<pesoIdeal<<"kg\n";
	}
	
	
	
	getchar();
	return 0;
}


