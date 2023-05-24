algoritmo "Exercicio Matriz 1"

var
   m1:vetor[1..5,1..5] de inteiro
      linha, coluna:inteiro
inicio
  para linha <- 1 ate 5 faca
     para coluna <- 1 ate 5 faca
      escreva("Informe o número da linha ", linha, " coluna ", coluna,": ")
      leia(m1[linha,coluna])
     fimpara
  fimpara
  
  limpatela

  escreval("A matriz original é: ")
  
  para linha <- 1 ate 5 faca
   para coluna <- 1 ate 5 faca
    escreva(m1[linha,coluna])
   fimpara
   escreval()
  fimpara
  
  escreval("A matriz ao quadrado é: ")
  
  para linha <- 1 ate 5 faca
   para coluna <- 1 ate 5 faca
    escreva(m1[linha,coluna]*m1[linha,coluna])
   fimpara
   escreval()
  fimpara
fimalgoritmo
