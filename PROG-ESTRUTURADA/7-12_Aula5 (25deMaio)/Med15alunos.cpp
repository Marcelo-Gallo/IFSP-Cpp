/*
Faça um Programa que leia 3 notas escolares de 15
alunos. Para cada um dos alunos calcular e
apresentar a média aritmética.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont=1, contmed=1;
	float med, soma, nota;
	char nome[30];
	
	while(cont<=15){
		cout<<"\n"<<cont<<"° aluno";
		cout<<"\nDigite o nome do aluno: ";
		cin>>nome;
		
			while(contmed<=3){
				cout<<"Digite a "<<contmed<<"ªnota: ";
				cin>>nota;
				soma=soma+nota;
				contmed++;
		}
		
		med=soma/contmed;
		cout<<"A média do aluno "<<nome<<" é: "<<med<<"\n";
		
		contmed=1;
		med=0;
		soma=0;
		nota=0;
		
		cont++;
	}
	
	
return 0;	
}
