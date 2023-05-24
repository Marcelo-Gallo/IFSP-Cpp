algoritmo "Alturas"
//Construir um algoritimo que leia a ltura de 20 pessoas.
//O algoritimo deve calcular e imprimir a média de todas as alturas e
//quantas pessoas possuem altura maior que 2 metros
var
contador, marcador:inteiro
altura, media, soma:real

inicio
   marcador<-0
   soma<-0
   escreval("Digite a altura: ")
   
   para contador <- 1 ate 20 faca
   escreval("Digite uma altura: ")
   leia(altura)

   se(altura>2.00) entao
   marcador <- (marcador+1)
   fimse
   Soma<-(soma+altura)
   
   fimpara
   media <- soma / 20
   escreval("A média das alturas é: ", media)
   escreval("A quantidade de pessoas com mais de dois metros é: ", marcador)


fimalgoritmo
