algoritmo "Numero por extenso"
//Escreva um algoritmo que solicita ao usuário para digitar um número inteiro
//positivo, e mostre-o por extenso. Este número deverá variar entre 1 e 5. Se
//o usuário digitar um número que não pertence a este intervalo, mostre a frase
//"numero invalido". O programa deve ficar executando até que o usuário digite 0
var
num:inteiro
inicio
num <- 1
escreval("Para encerrar o programa de escrever números por extenso, digite '0'")
escreval("Os numeros devem estar num intervalo de 1 a 5")
//tive que colocar 1 como valor de num pq quando se cria variavel numérica
// ela começa valendo 0
   enquanto (num <> 0) faca
      escreval ("Digite um numero: ")
      leia(num)
         se (num=1) e (num<>0) entao
            escreval("Você digitou o número um!")
         senao
            
            se (num=2) e (num<>0) entao
               escreval("Você digitou o número dois!")
            senao
            
               se (num=3) e (num<>0) entao
                  escreval("Você digitou o número três!")
               senao

                  se (num=4) e (num<>0) entao
                     escreval("Você digitou o número quatro!")
                  senao

                     se (num=5) e (num<>0) entao
                        escreval("Você digitou o número cinco!")
                     senao

                        se (num>5) ou (num<0) ou (num<>0) entao
                           escreval("Número Inválido!!!")

                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse

   fimenquanto
         
fimalgoritmo
