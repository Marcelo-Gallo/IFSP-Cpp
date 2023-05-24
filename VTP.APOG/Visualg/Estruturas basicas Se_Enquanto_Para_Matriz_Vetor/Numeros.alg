algoritmo "semnome"
//faça um algoritmo que solicite N números inteiros até que o numero 0(zero)
//seja digitado.
//Ao final o algoritmo deve informar o maio e o menor número digitado.
//Obs: o numero 0(zero) não pode ser contado
var
numero, maior, menor:inteiro
inicio
menor <- 99999999
//flag é variavel auxiliar
//copiar jeito do professor e estudar
//o numero <-1 é pra começar o enquanto, se não num entra

escreva("informe o primeiro numero: ")
leia(numero)

   enquanto numero <>0 faca
      escreva("Informe um número: ")
      leia(numero)
         se (numero <>0) entao
         se (numero >= maior) entao
            maior<-numero
         senao
            menor<-numero
         fimse
         fimse
   fimenquanto
   
     escreval("O maior número é: ", maior)
     escreval("O menor número é: ", menor)

fimalgoritmo
