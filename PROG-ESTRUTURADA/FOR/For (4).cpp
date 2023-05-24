#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

/*faça um programa que passe por um laço 100 vezes e mostre apenas os numeros inteiros impares
i%2!=0 -> impar (se o resto da divisao por 2 for diferente de zero)
*/


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i=1;i<=100;i++){
	
		if(i%2!=0){
			cout<<i<<"\n";
		}
	}
	system("PAUSE");
	return 0;
}
