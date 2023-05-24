algoritmo "Exemplo Função 3"
var
horas_trabalhadas:inteiro
valor_hora:real
//salario_final:real
inicio
      funcao calculo_salario(a:inteiro;b:real):real  //esse ultimo indica que retorna valor real
            var
             salario:real
            inicio
             salario <- a * b
             retorne salario
      fimfuncao

      escreva("Informe o Valor das Horas: ")
      leia(valor_hora)
      escreva("Informe as Horas Trabalhadas: ")
      leia(horas_trabalhadas)
      escreva() //só pra pular uma linha
      //alem doq ta aqui embaixo eu poderia ter atribuido o valor da função numa variavél, desse jeito:
      //salario_final <- calculo_salario(horas_trabalhadas,valor_hora)
      //escreva ("O valor do salário é: ", salario_final)
      escreva("O valor do salário é: ",calculo_salario(horas_trabalhadas,valor_hora))
fimalgoritmo
