'''
Faça um algoritmo que solicite a resposta de x pessoas sobre a preferência de um produto. Esta pessoa deverá responder 1 se gostou do primeiro
2 se gostou do segundo ou 3 se gostou do terceiro.
Ao final deve ser impresso na tela a quantidade de pessoas que gostaram do produto 1, do produto 2 e do produto 3.
Para finalizar a pesquisa deve ser digitado 0.

else não deixa passar pra linha de baixo, se o if for verdade ele segura.
'''

#variáveis:
resp = 0
cont1 = 0
cont2 = 0
cont3 = 0

resp = int(input("Informe a resposta do entrevistado (1|2|3): "))

while(resp !=0):

    if(resp==1):
        cont1 += 1
    elif(resp==2):
        cont2 += 1
    elif(resp==3):
        cont3 += 1

    resp = int(input("Informe a resposta do entrevistado (1|2|3): "))

print(f"A quantidade de escolhas do produto 1 foi: {cont1}")
print(f"A quantidade de escolhas do produto 2 foi: {cont2}")
print(f"A quantidade de escolhas do produto 3 foi: {cont3}")




