algoritmo "Aumento"
//Faça um programa que receba o código correspondente ao cargo de um funcionário
//e sey slário atual e mostre o cargo, o valor do aumento e seu novo salário.
//Os cargos estão na tabela a seguir.
//Código     Cargo          Aumento
//   1       Escrituário      50%
//   2       Secretário       35%
//   3       Caixa            20%
//   4       Gerente          10%
//   5       Diretor          0%

var

sal, Au, SalA:real
cod:inteiro

inicio

   escreva("Digite o código do cargo de 1 a 5: ")
   leia(cod)
   se(cod=1)entao
      escreval("Cargo de Escrituário")
      escreva("Salário: ")
      leia(sal)
      escreval("O aumento é 50%")
      SalA <- (sal+(sal*50/100))
      escreva("O salário final é: ",SalA)
   senao
      se(cod=2)entao
         escreval("Cargo de Secretário")
         escreva("Salário: ")
         leia(sal)
         escreval("O aumento é 35%")
         SalA <- (sal+(sal*35/100))
         escreva("O salário final é: ",SalA)
      senao
         se(cod=3)entao
            escreval("Cargo de Caixa")
            escreva("Salário: ")
            leia(sal)
            escreval("O aumento é 20%")
            SalA <- (sal+(sal*20/100))
            escreva("O salário final é: ",SalA)
         senao
            se(cod=4)entao
               escreval("Cargo de Gerente")
               escreva("Salário: ")
               leia(sal)
               escreval("O aumento é 10%")
               SalA <- (sal+(sal*10/100))
               escreva("O salário final é: ",SalA)
            senao
               se(cod=5)entao
                  escreval("Cargo de Diretor")
                  escreva("Salário: ")
                  leia(sal)
                  escreval("O aumento é 0%")
                  SalA <- (sal)
                  escreva("O salário final é: ",SalA)
               senao
                  se(cod>5) ou (cod=0)entao
                     escreva("Código Inválido!!!")
                  senao
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse

      SalA <- (sal*Au/100)

fimalgoritmo
