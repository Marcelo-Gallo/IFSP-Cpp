algoritmo "semnome"
// Construir um algoritimo que calcule a media aritimetica de varios valores
//inteiros positivos, lidos externamente.
//O final da leitura acontecerá quando um valor negativo for lido, esse valor
//nao pode ser computado na média.
var
   S,N,cont:inteiro
inicio

   escreva("Informe o primeiro valor: ")
   leia(S)
   
   enquanto (N>=0) faca
   S <- S+N
   cont <- cont+1
   escreva("Proximo numero: ")
   leia(N)
   

   
   fimenquanto
   
   
   escreva("A media é: ",S/cont)
fimalgoritmo
