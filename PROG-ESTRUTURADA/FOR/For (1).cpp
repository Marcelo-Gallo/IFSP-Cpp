#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	for(i=1;i<10;i++){//i++ vai somar de 1 em 1 ao i
		cout<<"\ni: "<<i<<"\n";
	}
	
	system("PAUSE");
	return 0;
}
