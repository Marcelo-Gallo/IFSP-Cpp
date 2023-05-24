algoritmo "semnome"
//faça um algoritmo que leia varios numeros e informe quantos desses
//numeros entre 100 e 200 foram digitados.
//quando o valor zero for lido o algoritmo devera parar sua execução.
var
cont:inteiro
N:real
inicio
N<-1
   enquanto (N<>0) faca
   escreva("Digite um numero ou zero para sair: ")
   leia(N)
      se ((N>=100) e (N<=200)) entao
         cont<-cont+1
      fimse
   fimenquanto
   
   escreva("Foram digitados",cont," numeros entre 100 e 200.")

fimalgoritmo
