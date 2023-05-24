algoritmo "Maior e menor numero digitados"

//Faça um algoritimo que solicite N números inteiros. Ao final o algoritimo
//deve informar o maior e o menor número digitado.

var

entrada, contador, n, maior, menor:inteiro

inicio
   entrada <- 0
   maior <-0
   
   escreva("Informe a quantidade de números: ")
   leia(n)
   
   para contador <- 1 ate n faca
   escreval("Informe um número: ")
   leia(entrada)
    se (entrada >= maior) ou (entrada >= menor) e (entrada >= 0)entao
     maior <- entrada
    fimse
     se (entrada <= maior) ou (entrada <= menor) e (entrada <= 0) entao
      menor <- entrada
     fimse
     
     
    fimpara
     escreval("O maior número é: ", maior)
     escreval("O menor número é: ", menor)
   
   



fimalgoritmo
