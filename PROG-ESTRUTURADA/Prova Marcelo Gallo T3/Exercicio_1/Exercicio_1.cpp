#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int matriz[6][6], i, j;
	
	//matriz criada:
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			matriz[i][j] = rand() %151;
		}
	}
	
	//substituindo valores por 0:
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(i>j){
				matriz[i][j]=0;
			}
		}
	}
	
	//exibindo matriz editada:
	for(i=0;i<6;i++){
		cout<<"\n";
		for(j=0;j<6;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	return 0;
}
