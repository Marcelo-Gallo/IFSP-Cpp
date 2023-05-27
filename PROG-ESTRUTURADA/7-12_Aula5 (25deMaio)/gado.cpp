/*
Um agricultor possui uma certa quantidade de
gado em seu pasto. Porém ele não sabe quantos
são. Ele deseja fazer um cadastro e identificar qual é
o animal mais pesado e qual é o mais leve dentre
eles. O programa deve registrar um animal de cada
vez e a cada iteração o usuário digitará o peso e o
número de identificação.
No final do procedimento, mostrar:
• O peso e a identificação do animal mais gordo
• O peso e a identificação do animal mais magro
• A quantidade total de gado.
• A média do peso do gado.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	int cont, id, idmaior, idmenor, contagd, resp=1;
	float med, peso, pesomaior, pesomenor, soma;
	
	pesomenor=99999999;
	
	while(resp!=0){
				
		cout<<"\n\nInforme a identificação numérica do animal: ";
		cin>>id;
		
		cout<<"Informe o peso do animal (@'s): ";
		cin>>peso;
		soma=soma+peso;
		
			if(peso>pesomaior){
				pesomaior=peso;
				idmaior=id;
			}
			
				else if(peso<pesomenor){
					pesomenor=peso;
					idmenor=id;
				}
					//else
	contagd++;
	
	cout<<"\nDeseja encerrar a marcação? 0 -> sim // 1 -> nao R:";
	cin>>resp;
	
	}
	med=soma/contagd;
	
	cout<<"==============================================================================";
	cout<<"\nO animal mais gordo possui o ID: "<<idmaior<<" e pesa "<<pesomaior<<" @'s";
	cout<<"\nO animal mais magro possui o ID: "<<idmenor<<" e pesa "<<pesomenor<<" @'s";
	cout<<"\nA quantidade total do rebanho é: "<<contagd<<" cabeças";
	cout<<"\nA média do peso do rebanho é: "<<med;
	cout<<"\n==============================================================================";
	
	
	return 0;	
}
