/*
Faça um programa para verificar se uma determinada senha (numerica) digitada esta correta.
O usuário terá apenas 3 tentativas. Se o usuário errar a senha, então mostre a frase:
"Senha incorreta. Você tem mais X tentativas", onde x é a quantidade restante de tentativas.
Se o usuario acertar a senha, então mostre a mensagem "Acesso pertmitido!" e interromper a execução com o codigo "breack".
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int senha, senhadigitada;
	int contador=2;
	
	senha=220205;
	
	while(contador>=0){
		cout<<"\nDigite a senha: ";
		cin>>senhadigitada;
			
			if(senhadigitada!=senha && contador==0){
			cout<<"\nTentativas esgotadas!\n";
			break;
			}
			else
			
			if(senhadigitada!=senha){
			cout<<"\nSenha incorreta. Você tem mais "<<contador<<" tentativas";
			}
						
			else{
			cout<<"\nAcesso Permitido!\n";
			break;
			}
		contador--;
	}
	
	return 0;
}
