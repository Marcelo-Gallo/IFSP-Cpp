algoritmo "Exercicio Matriz 2"

var
   m1:vetor[1..6,1..6] de inteiro
   linha, coluna:inteiro
inicio
  para linha <- 1 ate 6 faca
     para coluna <- 1 ate 6 faca
      escreva("Informe o número da linha ", linha, " coluna ", coluna,": ")
      leia(m1[linha,coluna])
     fimpara
  fimpara
  
  limpatela

  escreval("A matriz original é: ")
  
  para linha <- 1 ate 6 faca
   para coluna <- 1 ate 6 faca
    escreva(m1[linha,coluna])
   fimpara
   escreval()
  fimpara
  
  escreval("A diagonal principal da matriz contem os elementos: ")
  
  para linha <- 1 ate 6 faca
   para coluna <- 1 ate 6 faca
    se(coluna=linha)entao
    escreva(m1[linha,coluna])
    fimse
   fimpara
  fimpara
    

  
fimalgoritmo


