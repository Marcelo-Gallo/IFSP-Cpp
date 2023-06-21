/*

*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//Criada matriz 2x2
	int matriz[2][2], i, j;
	
	//Atribuindo valores à matriz 2x2
	for (i=0;i<2;i++){ //controle de linhas
		for (j=0;j<2;j++){ //controle de colunas
			//Fazendo a atribuição
			cout<<"Digite o valor para a linha "<<i<<" e coluna "<<j<<": ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<"\nA matriz digitada foi: ";
	for (i=0;i<2;i++){ //controle de linhas
	
		cout<<"\n"; //adicionei para dar a estética de matriz, pulando uma linha quando as colunas acabarem.
		
		for (j=0;j<2;j++){ //controle de colunas
			//Fazendo a atribuição
			cout<<matriz[i][j]<<"\t";//  -- \t faz tabulação "Apertar o tab"-- 
		}
	}
	
	
	return 0;
}
