#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade=0, contf=0, mulherxp=0, contm=0, soma=0, media=0, mais45=0, porcentagem=0;
	char sexo[1], xp[1];
	
	//iniciando o while:
	cout<<"\nIdade do candidato |0 para encerrar|: ";
	cin>>idade;
	
	while(idade!=0){
		//cout<<"\nIdade do candidato |0 para encerrar|: ";
		//cin>>idade;
		
		cout<<"\nSexo do candidato [F] ou [M]: ";
		cin>>sexo;
		
		cout<<"\nCandidato possui experiencia no serviço [S] ou [N]: ";
		cin>>xp;
		
		//contando se for mulher:
		if(strcmp(sexo,"F") || strcmp(sexo,"f") == 0){
			contf++;
			
			//contando se for mulher com experiencia e menor de 21 anos:
			if(idade<21 && strcmp(xp,"S") || strcmp(xp,"s")){
				mulherxp++;
			}
		}
		
		//contando se for homem:
		else if(strcmp(sexo,"M") || strcmp(sexo,"m") == 0){
			contm++;
			
			//contando se for homem com experiencia:
			if(strcmp(xp,"S") || strcmp(xp,"s")){
				soma = soma + idade;
			}
			
			//contando homens maiores de 45:
			if(idade>45){
				mais45++;
			}
		}
		
		//reiniciando while:
		cout<<"\nIdade do candidato |0 para encerrar|: ";
		cin>>idade;	
	}
	
	
	//como contm é um divisor, tenho que coloca-lo em um IF para contornar quando der zero.
	//O programa irá dar erro na execução se isto não for feito.
	if(contm!=0){
		media = soma/contm;
		porcentagem = ((mais45/contm)*100);
		
		cout<<"===Resultado do levantamento===\n";
		cout<<"O total de candidatos mulheres foi: "<<contf;
		cout<<"\nO total de canditados homens foi: "<<contm;
		cout<<"\nA média dos homens que já têm experiencia no serviço é: "<<media;
		cout<<"\nA porcentagem dos homens com mais de 45 anos, dentre o total, é: "<<porcentagem;
		cout<<"\nO número de mulheres com idade inferior a 21 anos e com experiencia no serviço é: "<<mulherxp;
		
		cout<<"\n\nFIM DA EXECUÇÃO";	
	}
	
	else if(contf!=0){
		cout<<"\nNão há candidatos homens, portanto: \n";
		cout<<"O total de candidatos mulheres foi: "<<contf;
		cout<<"\nO número de mulheres com idade inferior a 21 anos e com experiencia no serviço é: "<<mulherxp;
		cout<<"\n\nFIM DA EXECUÇÃO";
	}
	
	else{
		cout<<"\nNenhum candidato cadastrado.";
	}
	
	
	
	return 0;
}
