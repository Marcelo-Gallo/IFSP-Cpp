algoritmo "média"

var

   nota1, nota2, nota3, nota4, mediaf:real

inicio

   escreva("Informe a nota 1: ")
   leia(nota1)
   escreva("Informe a nota 3: ")
   leia(nota2)
   escreva("Informe a nota 3: ")
   leia(nota3)
   escreva("Informe a nota 4: ")
   leia(nota4)

   mediaf<-(nota1 + nota2 + nota3 + nota4) /4
   
   escreval("A média final é: ", mediaf)
   
   se(mediaf >=6)entao
      escreva("Aluno aprovado!!!")
   senao
      se(mediaf >=4) e (mediaf <6)entao
         escreva("Aluno de recuperação!!!")
      senao
         escreva("Aluno reprovado!!!")
      fimse
   fimse
   
fimalgoritmo
