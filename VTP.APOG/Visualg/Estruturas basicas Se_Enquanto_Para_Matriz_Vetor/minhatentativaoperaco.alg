algoritmo "Operações"

var

n1,n2,resultado:real
op:real

inicio

escreval("Escolha a operação: ")
escreval("Adição(1)")
escreval("Subtração(2)")
escreval("Multiplicação(3)")
escreval("Divisão(4)")
leia(op)

 se(op=1)entao
  escreva("Digite o primeiro valor: ")
  leia(n1)
  escreva("Digite o segundo valor: ")
  leia(n2)
  resultado<-(n1+n2)
  escreva("O resultado é: ",resultado)
 senao
 
  se(op=2)entao
   escreva("Digite o primeiro valor: ")
   leia(n1)
   escreva("Digite o segundo valor: ")
   leia(n2)
   resultado <- (n1-n2)
   escreva("O resultado é: ",resultado)
  senao
  
     se(op=3)entao
      escreva("Digite o primeiro valor: ")
      leia(n1)
      escreva("Digite o segundo valor: ")
      leia(n2)
      resultado<-(n1*n2)
      escreva("O resultado é: ",resultado)
     senao
     
       se(op=4)entao
        escreva("Digite o primeiro valor: ")
        leia(n1)
         se(n1=0)entao
          Escreva("O resultado é 0")
         senao
          escreva("Digite o segundo valor: ")
          leia(n2)
           se(n2=0)entao
            escreva("O resultado é 0")
           senao
           
            resultado<-(n1/n2)
            escreva("O resultado é: ",resultado)
     
           fimse
         fimse
       fimse
     fimse
   fimse
 fimse
     
fimalgoritmo



