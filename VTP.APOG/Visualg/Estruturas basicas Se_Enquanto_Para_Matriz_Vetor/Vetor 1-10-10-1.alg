algoritmo "Vetor 1-10-10-1"

var
   conta:vetor[1..10] de inteiro
   contador:inteiro
inicio
 para contador <- 1 ate 10 faca
  escreva("Informe o ",contador,"° numero: ")
  leia(conta[contador])
 fimpara
 
 para contador <-1 ate 10 faca
  escreva(conta[contador]," ")
 fimpara
 
 para contador <-10 ate 1 passo -1 faca
  escreva(conta[contador]," ")
 fimpara
  
fimalgoritmo
