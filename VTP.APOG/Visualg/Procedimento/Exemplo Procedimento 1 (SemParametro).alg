algoritmo "exemplo procedimento"
var

inicio
      procedimento calculo_idade()
       var
        ano_nasc, ano_atual, idade:inteiro
       inicio
        escreva("Informe o Ano de Nascimento: ")
        leia(ano_nasc)
        escreva("Informe o Ano Atual: ")
        leia(ano_atual)
        idade <- ano_atual - ano_nasc
        escreval("A idade em anos é: ",idade)
      fimprocedimento
      //chamando o procedimento calculo_idade()
      calculo_idade()
fimalgoritmo
