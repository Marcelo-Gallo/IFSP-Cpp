#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

/*Um professor precisa calcular a media aritimetica de 4 notas, as notas de cada prova variam de 0 a 10.
Faça um programa utilizando laço de repetição que receba as 4 notas e mostre a média.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float nota=0,media=0,soma=0;
	
	for(i=1;i<=4;i++){
		cout<<"Informe a "<<i<<"ª nota: ";
		cin>>nota;
		soma=soma+nota;
	}
	media=(soma/4);
	cout<<"A media das notas é: "<<media<<"\n";
	
	system("PAUSE");
	return 0;
}
