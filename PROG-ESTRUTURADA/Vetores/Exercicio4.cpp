/*
Faça um programa que preencha um vetor com 8 posições.
Calcule e mostre dois vetores resultantes.
O primeiro vetor resultante deve conter os números positivos.
O segundo vetor resultante deve conter os números negativos.
Cada vetor resultante vai ter, no máximo, 8 posições (por que?)
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i=0, contaneg=0, contapos=0;
	float vet[8], vetpos[8], vetneg[8];
	
	for(i=0;i<=7;i++){
		cout<<"Informe o valor da "<<i+1<<"ª casa: ";
		cin>>vet[i];
		
		if(vet[i]<0){
			vetneg[contaneg]=vet[i];
			contaneg++;
		}
			else if(vet[i]>=0){
				vetpos[contapos]=vet[i];
				contapos++;
			}
	}
	
	/*
	Preciso usar vetneg[i] --> o i pq o meu for ta andando de i em i,
	se colocar o contador(contaneg) da erro pq não é meu contador que ta fazendo o loop.
	O contaneg é só pra dizer quando parar.
	Famoso: meu loop ta em função de i e não de contaneg.
	Não posso colocar i<=contaneg pq ele vai andar uma casa a mais doq deveria(pq eu somei lá no if), melhor colocar só <.
	Sugestão minha depois de reler o código: trocar contaneg, contapos por ineg, ipos(menos confuso).
	*/
	
	cout<<"Valores negativos: ";
	for(i=0;i<contaneg;i++){
		cout<<"["<<vetneg[i]<<"] ";
		
	}
		cout<<"\nValores positivos: ";
	for(i=0;i<contapos;i++){
		cout<<"["<<vetpos[i]<<"] ";
	}
	
	return 0;
}
