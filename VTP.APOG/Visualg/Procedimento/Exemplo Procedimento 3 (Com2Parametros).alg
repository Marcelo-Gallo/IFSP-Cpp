algoritmo "exemplo procedimento2"
var
 ano_nasc, ano_atual:inteiro
 nome:literal
inicio
      procedimento calculo_idade(a,b:inteiro;n:literal)
       var
        idade:inteiro
       inicio
        idade <- a - b
        
        escreval(n,", a sua idade em anos é: ",idade)
      fimprocedimento
      
      escreva("Informe o Nome do Usuário: ")
      leia(nome)
      escreva("Informe o Ano de Nascimento: ")
      leia(ano_nasc)
      escreva("Informe o Ano Atual: ")
      leia(ano_atual)
        
      //chamando o procedimento calculo_idade(a,b:inteiro)
      calculo_idade(ano_atual,ano_nasc,nome)
fimalgoritmo
