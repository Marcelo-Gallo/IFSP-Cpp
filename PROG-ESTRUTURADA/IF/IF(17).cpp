//Verifique se o numero digitado é menor ou igual a 50!

#include <iostream>
using namespace std;

int main(){
	
	float num;
	
	cout<<"Digite um numero: \n";
	cin>>num;
	
	if(num<=50){
		cout<<"O numero "<<num<<" eh menor ou igual a 50!";
	}
	
	else{
		cout<<"O numero "<<num<<" eh maior que 50!";
	}
	
	getchar();
	return 0;
}
