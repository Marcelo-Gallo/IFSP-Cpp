/*
Um professor precisa calcular a média aritmética de 4 notas.
As notas de cada prova variam de 0 a 10. --> não foi considerado!
Faça um programa utilizando laço de repetição que receba as 4 notas e mostre a média.
Faça com while()
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	float nota=0, media=0, contaNota=0;
	
	while(contador<=4){
		cout<<"Digite a "<<contador<<"ª nota: ";
		cin>>nota; //recebe nota
				
		contaNota=contaNota+nota; //acomula nota
		
		contador++; //conta iterações
		
	}
	
	media=contaNota/(contador-1); //contador valia 5 (começou no 1 e rodou +4 vezes)
	//ou podia colocar o contador = 0 e tirar o -1
	
	cout<<"A média das notas é: "<<media;
	return 0;
}
