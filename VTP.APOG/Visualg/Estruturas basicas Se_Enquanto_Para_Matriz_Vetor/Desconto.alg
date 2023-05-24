algoritmo "Desconto"

var

   PrecoProduto, Desconto, ValorFinal: real
inicio

   escreva("Informe o preço do produto: ")
   leia(PrecoProduto)
   escreva("Informe o desconto em %: ")
   leia(Desconto)
   
   ValorFinal<-(PrecoProduto-(PrecoProduto*(Desconto*0.01))):real
   //Podia ter colocado como:
   //ValorFinal<-(PrecoProduto-(PrecoProduto*(Desconto/100))):real
   escreva("O valor com desconto é: ",ValorFinal)
   


fimalgoritmo
