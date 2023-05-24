//Aula dia 28/03/2023:Calculo de média(introdução)

algoritmo "Calcular média"

var
   nota1, nota2, nota3, nota4, mediaf:real
inicio
   escreva("Informe a nota 1: ")
   leia(nota1)
   escreva("Informe a nota 2: ")
   leia(nota2)
   escreva("Informe a nota 3: ")
   leia(nota3)
   escreva("Informe a nota 4: ")
   leia(nota4)
   
   mediaf <- (nota1 + nota2 + nota3 + nota4) /4
   
   escreva("A média final é: ", mediaf:2:4)
fimalgoritmo
