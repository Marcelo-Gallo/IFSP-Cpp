#include <iostream>

using namespace std;

int main(){
	//nesse exercicio vamos mostrar os resultados
	//das operações basicas de matemática utilizando
	//utilizando 6 variáveis de numeros reais(float)
	float n1=20,n2=4,soma,diferenca,divisao,multiplicacao;
	
	soma=n1+n2;
	diferenca=n1-n2;
	divisao=n1/n2;
	multiplicacao=n1*n2;
	
	cout<<"Soma: "<<soma<<"\nDiferença: "<<diferenca<<"\nDivisão: "<<divisao<<"\nMultiplicação: "<<multiplicacao;
	// Poderia ter escrito como:
	//  cout<<"Soma: "<<soma
	//  <<"\nDiferença: "<<diferenca
	//  <<"\nDivisão: "<<divisao
	//  <<"\nMultiplicação: "<<multiplicacao;
	// Só muda questões estéticas do código, mas o funcionamento é o mesmo!
	    
	    //getchar cria uma pausa no sistema esperando o usuário digitar alguma coisa
	    getchar();
	    return 0;
	
	
	
}
