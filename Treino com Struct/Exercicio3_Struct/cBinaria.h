#ifndef CBINARIA_H
#define CBINARIA_H

//Bilioteca String
#include  <cstdlib>
#include <string>
using namespace std;

struct sDadosImc{
    string nome;
    string cpf;
    float peso;
    float altura;
};


class cBinaria {
public:
    
    
    cBinaria();
    cBinaria(const cBinaria& orig);
    virtual ~cBinaria();
    
    void lerDados();
    float acharCPF_Sequencial(sDadosImc *vetPessoas, string cpf, int qnt);
    void Ordenador (sDadosImc *vetPessoas, int qnt);
    float acharCPF_Binaria(sDadosImc *vetPessoas, string cpf, int qnt);
    //float calcIMC(vetPessoas, int i);
    
private:

};

#endif /* CBINARIA_H */

