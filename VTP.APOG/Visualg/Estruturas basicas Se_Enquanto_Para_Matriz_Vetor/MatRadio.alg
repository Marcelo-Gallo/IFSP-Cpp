algoritmo "Material Radioativo"
//um determinado material radioativo perde metade de sua massa a cada 60 segundos.
//dada a massa inicial, em gramas, fazer um programa que determine o tempo necessario
//para que a massa se trne menor que 0,5 gramas.
//Escreva a massa inicial, a massa final e o tempo calculado em segundos.

var

m,mi:real
segundos:inteiro

inicio

   escreva("Informe a massa do material: ")
   leia(mi)

   m<-mi

   enquanto (m >=0.5) faca
   m <- (m/2)
   segundos <- segundos+60

   fimenquanto

   escreval("O valor da massa inicial é: ", mi)
   escreval("O Valor da massa final é: ", m)
   escreval("O valor total dos segundos é: ", segundos)


fimalgoritmo
