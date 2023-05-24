/*a nota final de um estudante é calculada a partir de três notas atribuidas, respectivamente, a um trabalho de laboratório,
a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece o peso a seguir:

        NOTA                    PESO
trabalho de laboratório          2
avaliação semestral              3
exame final                      5

faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela:
*/

#include <iostream>
using namespace std;

int main(){
	float traLab, avaSem, exameFinal, mediaPond1, mediaPond2, mediaPond3, mediaPondF;
	
	cout<<"Digite a nota do trabalho de laboratorio: ";
	cin>>traLab;
	
	cout<<"Digite a nota da avaliação semestral: ";
	cin>>avaSem;
	
	cout<<"Digite a nota do exame final: ";
	cin>>exameFinal;	
	
	mediaPond1=(traLab*0.2);
	mediaPond2=(avaSem*0.3);
	mediaPond3=(exameFinal*0.5);
	mediaPondF=(mediaPond1+mediaPond2+mediaPond3);
	
	if(mediaPondF>=0 && mediaPondF<5){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito E!";
	}
	
	else if(mediaPondF>=5 && mediaPondF<6){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito D!";
	}
	
	else if(mediaPondF>=6 && mediaPondF<7){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito C!";
	}
	
	else if(mediaPondF>=7 && mediaPondF<8){
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito B!";
	}
	
	else{
		cout<<"A media ponderada eh "<<mediaPondF<<" com conceito A!";
	}
	
	getchar();
	return 0;
}
