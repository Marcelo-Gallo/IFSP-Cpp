#ifndef CMERCADO_H
#define CMERCADO_H

#include  <cstdlib>
#include <string>
using namespace std;

//não farei operações com o preço, então cadastro como string.
struct sProduto{
    string nome;
    int cod;
    float preco;
};

class cMercado {
public:
    
    
    
    cMercado();
    cMercado(const cMercado& orig);
    virtual ~cMercado();
    
    void cadastrar();
    void imprimir(sProduto *vetProdutos, int qnt);
    void consultar(sProduto *vetProdutos, int qnt);
    
private:

};

#endif /* CMERCADO_H */

