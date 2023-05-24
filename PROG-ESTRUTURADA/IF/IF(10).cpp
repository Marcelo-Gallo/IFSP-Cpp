/*
O custo de um carro novo ao consumidor é a soma do custo de fábrica mais a porcentagem do distribuidor
e dos impostos (aplicado ao custo de fábrica).
Supondo que o percentual do distribuidor seja 13% (faz o L! KKKK), e os impostos de 18%, escreva um programa para ler:
-custo de fábrica

Mostrar:
-Custo digitado
-Valor do percentual do distribuidor
-valor do imposto
-Valor total final
*/
 #include <iostream>
 using namespace std;
 
 int main(){
 	
 	float custo, dist, imp, final;
 	
 	cout<<"Imforme o custo de fábrica do carro: R$";
 	cin>>custo;
 	
 	final=custo+(custo*13/100)+(custo*18/100);
 	
 	dist=custo*0.13;
 	imp=custo*0.18;
 	
 	cout<<"\n\nO valor percentual do distribuidor é: R$"<<dist
 		<<"\nO valor percentual dos impostos é: R$"<<imp
 		<<"\nOs valores acima são aplicados ao custo de fábrica*"
 		<<"\nO valor final é: R$"<<final;
 	
 	getchar();
 	return 0;
 	
 }
