algoritmo "Maior e menor numero digitados"

//Faça um algoritimo que solicite N números inteiros. Ao final o algoritimo
//deve informar o maior e o menor número digitado.

var

entrada, contador, n, maior, menor:inteiro

inicio
   entrada <- 0
   maior <-0
   menor <-0

   escreva("Informe a quantidade de números: ")
   leia(n)

   para contador <- 1 ate n faca
   escreval("Informe um número: ")
   leia(entrada)
   
   se(contador = 1)entao
     maior<-entrada
     menor<-entrada
   senao
   fimse //esse fim se fecha o se (senao é a primeira rodada, fimse)
   //Isso eu fiz pra não dar 0 no resultado
   //O 1 é a "rodada" do meu contador
   //Ele pega o primeiro valor digitado e salva em ambas as variaveis e
   //depois trabalha com as entradas seguintes
   
    se (entrada >= maior) entao
     maior <- entrada
    fimse
    
     se (entrada <= menor) entao
      menor <- entrada
     fimse


    fimpara
     escreval("O maior número é: ", maior)
     escreval("O menor número é: ", menor)
     
     fimalgoritmo
