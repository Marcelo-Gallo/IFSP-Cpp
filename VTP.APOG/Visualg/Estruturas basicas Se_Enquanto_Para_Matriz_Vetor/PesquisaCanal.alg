algoritmo "semnome"
//Foi feita uma pesquisa de audiencia de canal de tv em varias casas de uma certa
//cidade, num determinado dia.
//Para cada casa visistada, é fornecido o numero do canal (9,12,23ou40).
//Faça um algoritmo que:
//   -leia um numero indeterminado de dados, até que seja digitado o canal 0 (zero);
//   calcule e mostre a porcentagem de audiencia de cada emissora;
//   caso seja digitado algum canal fora da lista, informar como outros canais;
//   o numero zero não pode ser considerado um canal.

var

R,C9,C12,C23,C40,OC,cont,Total:inteiro
P9, P12, P23, P40, Po:real
inicio
R<-1
cont <- (-1)
   enquanto (R<>0) faca
//   cont <- cont+1
   escreva("Informe o numero do canal: | 9 | 12 | 23 | 40 | ou zero para sair: ")
   leia(R)
   cont <- cont+1
      se (R=9) entao
         C9<-C9+1
         //cont <- cont +1 (isso eu faço pra nao precisar negativar o contador) ai eu colocaria em todos os canais
      senao
            se(R=12) entao
               C12<-C12+1
            senao
                  se(R=23) entao
                     C23<-C23+1
                  senao
                        se(R=40) entao
                           C40<-C40+1
                        senao
                              se(R<>9) e (R<>12) e (R<>23) e (R<>40) e (R<>0) entao
                                 OC<-OC+1
                              fimse
                        fimse
                  fimse
            fimse
      fimse
   fimenquanto
   P9 <- ((C9*100)/cont))
   P12 <- ((C12*100)/cont))
   P23 <- ((C23*100)/cont))
   P40 <- ((C40*100)/cont))
   Po <- ((OC*100/cont))
   
   
   
   escreval("A porcentagem da audiencia para o canal C9 é de:",P9:2:2," %")
   escreval("A porcentagem da audiencia para o canal C12 é de:",P12:2:2," %")
   escreval("A porcentagem da audiencia para o canal C23 é de:",P23:2:2," %")
   escreval("A porcentagem da audiencia para o canal C40 é de:",P40:2:2," %")
   escreval("A porcentagem da audiencia para outros canais é de:",Po:2:2," %")
   
fimalgoritmo
