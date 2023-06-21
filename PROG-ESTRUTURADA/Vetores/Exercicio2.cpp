/*
Faça um programa que receba 7 notas referentes às notas de alunos de uma turma de inglês.
Os valores são reais (float).
Calcule e mostre a média das notas da classe.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){

    float md, soma, notas[7];
    int i;

    for (i=0;i<=6;i++){
        cout<<"Digite a nota do "<<i+1<<"º aluno: ";
        cin>>notas[i];
    }
    
    while(i>=6){
        soma += notas[i];
    }
    
}

