algoritmo "Exemplo Vetor - notas"

var
   notas:vetor[1..3] de real
   contador:inteiro
inicio
  para contador <- 1 ate 3 faca
   escreva("Informe a nota ", contador,": ")
   leia(notas[contador])
  fimpara
  
  para contador <- 1 ate 3 faca
   escreval("A nota ",contador," é: ", notas[contador])
  fimpara
fimalgoritmo
