#include "cMercado.h"
#include  <cstdlib>
#include <string>
#include <iostream>
#include <valarray>
using namespace std;

cMercado::cMercado() {
}

cMercado::cMercado(const cMercado& orig) {
}

cMercado::~cMercado() {
}

void cMercado::cadastrar(){
    int resp = 1, i = 0;
    int qnt = 0;
    
    cout<<"Quantidade de produtos a serem cadastrados: ";
    cin>>qnt;
    
    sProduto vetProdutos[qnt];

    
    for(i=0; i<qnt; i++){
        cout<<"\nNome do produto: ";
        cin>> vetProdutos[i].nome;
        
        cout<<"Codigo do produto: ";
        cin>>vetProdutos[i].cod;
        
        cout<<"Preço do produto: ";
        cin>>vetProdutos[i].preco;
        
    }
    
    this->imprimir(vetProdutos, qnt);
    this->consultar(vetProdutos, qnt);
    
}

void cMercado::imprimir(sProduto *vetProdutos, int qnt){
    int i=0;
    cout<<"\nLista de produtos cadastrados: "<<endl;
    for(i=0; i<qnt;  i++){
        cout<<vetProdutos[i].nome<<"   "<<vetProdutos[i].cod<<"   "<<vetProdutos[i].preco<<endl;
    }
    
}

void cMercado::consultar(sProduto *vetProdutos, int qnt){
    int cod;
    int i=0;
    
    cout<<"Codigo do produto que deseja consultar: ";
    cin>>cod;
    
    for(i=0; i<qnt;  i++){
        if(cod==vetProdutos[i].cod){
            cout<<"O preço do produto é: "<<vetProdutos[i].preco;
        }
    }
    
}