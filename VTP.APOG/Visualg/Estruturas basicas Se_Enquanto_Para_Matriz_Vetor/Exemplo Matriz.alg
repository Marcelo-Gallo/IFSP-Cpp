algoritmo "Exemplo Matriz"

var
   nome_sexo_alunos:vetor[1..3,1..2] de literal
inicio
   {nome_sexo_alunos[1,1]<-"Maria"
   nome_sexo_alunos[1,2]<-"Feminino"
   nome_sexo_alunos[2,1]<-"João"
   nome_sexo_alunos[2,2]<-"Masculino"
   nome_sexo_alunos[3,1]<-"Pedro"
   nome_sexo_alunos[3,2]<-"Masculino
   ---Aqui eu que defini os valores, agora vou pedir ao usuario}
   
   escreva("Informe o nome do aluno 1: ")
   leia(nome_sexo_alunos[1,1])
   escreva("Informe o sexo do aluno 1: ")
   leia(nome_sexo_alunos[1,2])
   
   escreva("Informe o nome do aluno 2: ")
   leia(nome_sexo_alunos[2,1])
   escreva("Informe o sexo do aluno 2: ")
   leia(nome_sexo_alunos[2,2])
   
   escreva("Informe o nome do aluno 3: ")
   leia(nome_sexo_alunos[3,1])
   escreva("Informe o sexo do aluno 3: ")
   leia(nome_sexo_alunos[3,2])
   
   escreval("O aluno ",nome_sexo_alunos[1,1], " é do sexo ", nome_sexo_alunos[1,2])
   escreval("O aluno ",nome_sexo_alunos[2,1], " é do sexo ", nome_sexo_alunos[2,2])
   escreval("O aluno ",nome_sexo_alunos[3,1], " é do sexo ", nome_sexo_alunos[3,2])
fimalgoritmo
