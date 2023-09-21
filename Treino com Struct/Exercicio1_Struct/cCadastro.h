#ifndef CCADASTRO_H
#define CCADASTRO_H

/* LEMBRETE PESSOAL: */
/* PARA DE ESQUECER AS BIBLIOTECAS KRL!!!*/

#include  <cstdlib>
#include <string>
using namespace std;

struct Sdados{
    string nome;
    string matricula;
    float vetorNotas[3];
};

class cCadastro {
public:
    
    cCadastro();
    cCadastro(const cCadastro& orig);
    virtual ~cCadastro();
    
    void qntAlunos();
    void lerDados(int);
    //void imprimirDados(); não vou fazer em método diferente pq precisaria passar os dados do vetor;
    
private:

};

#endif /* CCADASTRO_H */

