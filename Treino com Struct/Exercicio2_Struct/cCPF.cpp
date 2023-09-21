#include "cCPF.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <valarray>
#include <cmath>

using namespace std;

cCPF::cCPF() {
}

cCPF::cCPF(const cCPF& orig) {
}

cCPF::~cCPF() {
}

void cCPF::lerQnt(){
    int qntPessoas=0;
    
    cout<<"Pessoas a serem cadastradas: ";
    cin>>qntPessoas;
    
    this->lerDados(qntPessoas);
    
}

void cCPF::lerDados(int qntPessoas){
    
    Sdados Vetor[qntPessoas];
    int i=0;
    
    
    for(i=0; i<qntPessoas; i++){
        cout<<"\n\nNome: ";
        cin>>Vetor[i].nome;
        
        cout<<"Altura (m): ";
        cin>>Vetor[i].altura;
        
        cout<<"Peso (kg): ";
        cin>>Vetor[i].peso;
        
        cout<<"CPF (somente numeros): ";
        cin>>Vetor[i].cpf;
        
        cout<<"Sexo (M/F): ";
        cin>>Vetor[i].sexo;
        
    }
    //pesquisando:
    i=0;
    string aux;
    cout<<"\nInforme o CPF desejado: ";
    cin>>aux;
    float IMC;
    
    for(i=0; i<qntPessoas; i++){
        if(Vetor[i].cpf==aux){
            
            //caso necessário diferenciar masculino e feminino no calculo;
            if(Vetor[i].sexo=="M"){
                IMC = Vetor[i].peso/ pow(Vetor[i].altura,2);
            }
                
            if(Vetor[i].sexo=="F"){
                IMC = Vetor[i].peso/ pow(Vetor[i].altura,2);
            }
           
        }
    }
    cout<<"\nO IMC é: "<<IMC;
    
}