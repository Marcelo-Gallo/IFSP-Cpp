/*
	Exercicio04: 
	-Mostrar a matriz:
	
	|1| |0| |0| |0| |0|
	|0| |1| |0| |0| |0|
	|0| |0| |1| |0| |0|
	|0| |0| |0| |1| |0|
	|0| |0| |0| |0| |1|
	
*/

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int matriz[5][5], i, j;
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if(i==j){
				matriz[i][j]=1;
			}
				else{
				matriz[i][j]=0;
				}
		}
	}
	
	for (i=0; i<5; i++){
		cout<<"\n";
		for (j=0; j<5; j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	return 0;	
}
