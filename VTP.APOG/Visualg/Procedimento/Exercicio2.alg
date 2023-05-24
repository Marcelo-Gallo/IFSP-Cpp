algoritmo "Exercicio2"

var
  n1,n2,n3,n4:real
inicio
  procedimento cal_media(a,b,c,d:real)
   var
    media:real
   inicio
    media <- (a+b+c+d)/4
    escreva("A media é: ",media)
   fimprocedimento
   
   escreva("Informe o 1° número: ")
   leia(n1)
   escreva("Informe o 2° número: ")
   leia(n2)
   escreva("Informe o 3° número: ")
   leia(n3)
   escreva("Informe o 4° número: ")
   leia(n4)
   
   cal_media(n1,n2,n3,n4)
fimalgoritmo
