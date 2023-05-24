#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

/*
proposta: fazer a tabuada do 7
*/


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,mult;
	
	for(i=0;i<=10;i++){
		mult=7*i;
		cout<<"7x"<<i<<"="<<mult<<"\n";
	}
	
}
