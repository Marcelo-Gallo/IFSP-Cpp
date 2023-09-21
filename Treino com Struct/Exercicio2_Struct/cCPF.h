#ifndef CCPF_H
#define CCPF_H

//DESSA VEZ EU LEMBREI :)
#include  <cstdlib>
#include <string>
using namespace std;


struct Sdados{
    string nome;
    float altura;
    float peso;
    string cpf;
    string sexo;
    
};

class cCPF {
public:
    
    
    
    cCPF();
    cCPF(const cCPF& orig);
    virtual ~cCPF();
    
    void lerQnt();
    void lerDados(int);
    
    
private:

};

#endif /* CCPF_H */

