algoritmo "Solo"

//Você esta fazendo um trabalho de classificação de solo.
//Apos coletar uma amostra e verificar a quantidade de pontos de água presente
//nela, classificou a amostra em:
//Rochosa:Se menos ou igual a 10 pontos de água.
//Firme:Se mais de 10 e menos ou igual a 40 pontos de água.
//Pantanosa:Se mais de 40 e menos ou igual a 80 pontos de água.
//Quantidade inválida: se mais que 80 pontos.

var
   pontos:real
inicio

  escreva("Insira a quantidade de pontos d'água da amostra: ")
  leia(pontos)

  se(pontos <= 10)entao
     escreval("O solo é rochoso.")
  senao
     se(pontos > 10) e (pontos <= 40)entao
       escreval("O solo é firme.")
     senao
        se(pontos <= 80)entao
           escreval("O solo é pantanoso.")
        senao
           escreval("Quantidade de pontos inválida!")
        fimse
     fimse
  fimse
fimalgoritmo
