algoritmo "tentativa"
//Faça um algoritmo que receba N números e mostre
//positivo, negativo ou zero para cada número.
//Após informar o número e mostrar a reposta, deve ser perguntando
//se deseja informar mais um número (S-Sim ou N-Não).
var

V:real
S,N,L:literal

inicio

   escreva("Informe um numero: ")
   leia(V)
      se(V>0)entao
         escreva("Positivo!")
            se(V<0)entao
               escreva("Negativo!")
                  se(V=0)entao
                     escreva("Zero!")
                  fimse
            fimse
      fimse

      escreva("Deseja continuar? S ou N?")
      leia(L)
      
      enquanto (L<>N) faca
      escreva("Informe um numero: ")
   leia(V)
      se(V>0)entao
         escreva("Positivo!")

            se(V<0)entao
               escreva("Negativo!")

                  se(V=0)entao
                     escreva("Zero!")

                  fimse
            fimse
      fimse

      escreva("Deseja continuar? S ou N?")
      leia(L)
      
      fimenquanto
            
fimalgoritmo
