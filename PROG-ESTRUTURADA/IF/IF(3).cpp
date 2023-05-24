#include <iostream>

using namespace std;

/*
Nesse programa vamos criar nossa primeira variável.
A variável cria um espaço na memória do computador
que permite o armazenamento de dados. 
*/

int main()
{
	//normalmente as variáveis são criadas no início,
	//logo após a função main()
	//Devem ser obrigatóriamente criadas antes de serem usadas.
	//Vamos criar uma variável do tipo numeral inteiro.
	int numero;
	
	//Vamos atribuir um valor para ela
	numero=25;
	//Poderia ter sido escrito como: int numero=25;
	
	cout<<"O valor da variável numero eh: "<<numero
	<<"\nthe value of numero is: "<<numero;
	
	return 0;
}
