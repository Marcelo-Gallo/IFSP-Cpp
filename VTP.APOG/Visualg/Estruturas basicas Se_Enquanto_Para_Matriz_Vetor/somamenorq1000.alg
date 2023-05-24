algoritmo "Soma < 1000"

var
soma, contador:inteiro
inicio

   enquanto contador < 1000 faca
     se(contador mod 2 = 0) entao
        soma <- soma+contador
     fimse
     contador <- contador + 1
   fimenquanto

   escreval("O valor da soma com enquanto é: ", soma)

fimalgoritmo
