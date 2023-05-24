algoritmo "Exemplo Matriz 2"

var
   nome_sexo_alunos:vetor[1..3,1..2] de literal
   linha:inteiro {Variavel de controle do para}
inicio
  para linha <- 1 ate 3 faca
     escreva("Informe o nome do aluno ", linha, ": ")
     leia(nome_sexo_alunos[linha,1])
     escreva("Informe o sexo do aluno ", linha, ": ")
     leia(nome_sexo_alunos[linha,2])
  fimpara

  para linha <- 1 ate 3 faca
   escreval("O aluno ",nome_sexo_alunos[linha,1], " é do sexo ", nome_sexo_alunos[linha,2])
  fimpara

fimalgoritmo
