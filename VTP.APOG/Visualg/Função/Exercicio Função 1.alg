algoritmo "Exercicio 1 função"
//faça um algoritmo que receba 2 numeros inteiros (validos, não tera tratamento de erro) e qual operação deseja realizar:
//(+) adição, (-) subtração, (*) multiplicação, (/) divisao.
//construir uma função que receba os dois números e a operação desejada.
//Ao final mostrar resultado.
var
   num1, num2:real
   op:literal
inicio
////////////////////////////////////////////////////////////////////////////////
      funcao operacao (a,b:real;c:literal):real
             var
              resultado:real
             inicio
              se(c="*")entao
               resultado <- a * b
              senao
               se(c="/")entao
                resultado <- a / b
               senao
                se(c="+")entao
                resultado <- a + b
                senao
                 se(c="-")entao
                 resultado <- a - b
                 fimse
                fimse
               fimse
              fimse
      retorne resultado
      fimfuncao
////////////////////////////////////////////////////////////////////////////////
      escreva("Informe o primeiro numero: ")
      leia(num1)
      escreva("Informe o segundo numero: ")
      leia(num2)

      escreval("Qual operação deseja efetuar?")
      escreval("(+) Adição")
      escreval("(-) subtração")
      escreval("(*) multiplicação")
      escreval("(/) divisão")
      escreva("Operação escolhida: ")
      leia(op)

      escreva("O resultado é: ", operacao(num1,num2,op))
      
      
      
      
fimalgoritmo
