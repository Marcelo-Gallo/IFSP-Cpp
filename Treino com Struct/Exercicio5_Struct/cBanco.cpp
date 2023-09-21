#include "cBanco.h"
#include  <cstdlib>
#include <string>
#include <iostream>
#include <valarray>
using namespace std;

cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco::cadastro(){
    int i=0;
    int resp;
    
    sClientes vetClientes[3];
    
    for(i=0; i<3; i++){
        cout<<"\n\nNome do "<<i+1<<"º cliente: ";
        cin>> vetClientes[i].nome;
        
        cout<<"CPF do "<<i+1<<"º cliente: ";
        cin>> vetClientes[i].cpf;
        
        cout<<"Deposito inicial do "<<i+1<<"º cliente: ";
        cin>> vetClientes[i].saldo;
        
    }
    
    cout<<"Qual operação deseja realizar?";
    cout<<"\n[1]-Depósito\n[2]-Saque\n[3]-Finalizar transações\n";
    cin>>resp;
    
    if(resp==1){
        this->deposito(vetClientes);
    }
    else if(resp==2){
        this->saque(vetClientes);
    }
    else if(resp==3){
        cout<<"\nTransações finalizadas! Obrigado pela preferência!";
    }
    else {
        cout<<"\nOpção invalida! Finalizando atendimento.";
    }
    
}



/*DEPOSITO*/

void cBanco::deposito(sClientes *vetClientes){
    int i=0;
    string aux;
    float deposito;
    
    cout<<"Informe o CPF do cliente que deseja fazer um depósito: ";
    cin>>aux;
    
    for(i=0; i<3;i++){
        if(aux==vetClientes[i].cpf){
            cout<<"Valor do deposito: ";
            cin>>deposito;
            vetClientes[i].saldo += deposito;
            this->imprimir(vetClientes, i);
        }
    }
    
}



/*SAQUE*/

void cBanco::saque(sClientes *vetClientes){
    string aux;
    float saque;
    int i;
    
    cout<<"Informe o CPF do cliente que deseja fazer um depósito: ";
    cin>>aux;
    
    for(i=0; i<3;i++){
        if(aux==vetClientes[i].cpf){
            cout<<"Valor do saque: ";
            cin>>saque;
            vetClientes[i].saldo = vetClientes[i].saldo - saque;
            this->imprimir(vetClientes, i);
        }
    }
    
}



/*IMPRIMIR*/

void cBanco::imprimir(sClientes *vetClientes, int i){
    int resp;
    cout<<"\nOla, "<<vetClientes[i].nome<<"! Seu saldo atualizado é: R$"<<vetClientes[i].saldo;
    cout<<"\nDeseja realizar outra operação?"<<endl;
    cout<<"[1]-Depósito\n[2]-Saque\n[3]-Finalizar transações\n";
    cin>>resp;
    
    if(resp==1){
        this->deposito(vetClientes);
    }
    else if(resp==2){
        this->saque(vetClientes);
    }
    else if(resp==3){
        cout<<"\nTransações finalizadas! Obrigado pela preferência!";
    }
    else {
        cout<<"\nOpção invalida! Finalizando atendimento.";
    }
    
}