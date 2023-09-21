#include "cCadastro.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <valarray>

using namespace std;

cCadastro::cCadastro() {
}

cCadastro::cCadastro(const cCadastro& orig) {
}

cCadastro::~cCadastro() {
}

void cCadastro::qntAlunos(){
    int qntAlunos=0;
    
    cout<<"Alunos a serem cadastrados: ";
    cin>>qntAlunos;
    this->lerDados(qntAlunos); //chamo método ler dados e passo qntAlunos como parametro;
}

void cCadastro::lerDados(int qntAlunos){
    Sdados vetorQnt[qntAlunos]; //crio um vetor para a Struct com a quantidade de alunos (qntAlunos);
    int i=0, j=0;
    
    //for para a quantidade de alunos:
    for(i=0; i<qntAlunos; i++){
        // system("cls"); não achei a biblioteca
        
        cout<<"Nome do aluno: ";
        cin>>vetorQnt[i].nome;
        cout<<"Matrícula do aluno: ";
        cin>>vetorQnt[i].matricula;
        
        //for para coletar notas (mais de uma):
        for(j=0; j<=2; j++){
            cout<<j+1<<"ª nota do aluno: ";
            cin>>vetorQnt[i].vetorNotas[j];
            
        }
    }
    
    float vetorMedia[qntAlunos];
    i=0, j=0;
    
    
    for (i=0; i<qntAlunos; i++){
        int j=0;
        vetorMedia[i] = (vetorQnt[i].vetorNotas[j] + vetorQnt[i].vetorNotas[j+1] + vetorQnt[i].vetorNotas[j+2]) / 3; //se isso funcionar...
    }
    
    //mostrando os dados:
    // system("cls"); não achei a biblioteca

    cout<<"Dados coletados: "<<endl;

    i=0; 
    
        for(i=0; i<qntAlunos; i++){
            cout<<"\n"<<i+1<<"º Aluno: "<<endl;
            cout<<"Nome: "<<vetorQnt[i].nome<<endl;
            cout<<"Matricula: "<<vetorQnt[i].matricula<<endl;
            cout<<"Média: "<<vetorMedia[i]<<endl;

       }
 
}

    