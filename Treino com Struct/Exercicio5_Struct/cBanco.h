#ifndef CBANCO_H
#define CBANCO_H
#include  <cstdlib>
#include <string>
using namespace std;

struct sClientes{
    string nome;
    string cpf;
    float saldo;
};

class cBanco {
public:
    
    
    
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    
    void cadastro();
    void saque(sClientes *vetClientes);
    void deposito(sClientes *vetClientes);
    void imprimir(sClientes *vetClientes, int i);
    
private:

};

#endif /* CBANCO_H */

