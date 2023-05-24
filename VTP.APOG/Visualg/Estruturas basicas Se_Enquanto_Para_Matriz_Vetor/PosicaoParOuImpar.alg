algoritmo "Acrescimo P ou I"

var
 num:vetor[1..50] de real
   contador:inteiro
inicio
  para contador <- 1 ate 50 faca
    escreva("Informe o ",contador,"° numero: ")
    leia(num[contador])
   fimpara

   para contador <- 1 ate 50 faca
      se(contador mod 2=1)entao
       escreval("O numero",num[contador]," esta numa posição impar, aumenta-se 2% do valor, ficando: ",num[contador]*1.02)
      senao
       escreval("O numero",num[contador]," esta numa posição par, aumenta-se 5% do valor, ficando: ",num[contador]*1.05)
      fimse
   fimpara
fimalgoritmo

