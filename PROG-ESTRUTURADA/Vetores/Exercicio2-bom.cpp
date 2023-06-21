/*
Fa�a um programa que receba 7 notas referentes �s notas de alunos de uma turma de ingl�s.
Os valores s�o reais (float).
Calcule e mostre a m�dia das notas da classe.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

    float md, soma, notas[7];
    int i=0;

    for (i=0;i<=6;i++){
        cout<<"Digite a nota do "<<i+1<<"e aluno: ";
        cin>>notas[i];
        //vamos somar as notas.
        soma += notas[i];
    }
    
    md=soma/7;
    cout<<"A m�dia da classe �: "<<md;
    
    return 0;    
}
