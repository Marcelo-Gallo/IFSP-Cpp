algoritmo "exemplo procedimento2"
var
 ano_nasc, ano_atual:inteiro
inicio
      procedimento calculo_idade(a,b:inteiro)
       var
        idade:inteiro
       inicio
        idade <- a - b
        
        escreval("A idade em anos é: ",idade)
      fimprocedimento
      
      escreva("Informe o Ano de Nascimento: ")
      leia(ano_nasc)
      escreva("Informe o Ano Atual: ")
      leia(ano_atual)
        
      //chamando o procedimento calculo_idade(a,b:inteiro)
      calculo_idade(ano_atual,ano_nasc)
fimalgoritmo
