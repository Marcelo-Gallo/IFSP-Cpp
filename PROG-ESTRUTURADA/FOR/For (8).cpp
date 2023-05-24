#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

/*
proposta: fazedor de qualquer tabuada (fiz até numero inteiro ou quebrado).
*/


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num,mult;
	int i;
	
	cout<<"Informe a tabuada desejada: ";
	cin>>num;
	cout<<"\n";
		
	for(i=0;i<=10;i++){
		mult=num*i;
		cout<<num<<"x"<<i<<"="<<mult<<"\n";
	}
	
}
