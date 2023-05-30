'''
Construir um algoritmo que leia a idade de N pessoas.
O sistema deve calcular: a média das idades, a menor e a maior idade informada.

soma = soma + idade
soma += idade --> é a mesma coisa
'''

#variáveis:
maior = 0
menor = 0
media = 0.0
pessoas = 0
soma = 0
idade = 0

#algoritmo:

pessoas = int(input("Informe quantas pessoas teram a idade computada: "))


for contador in range(0,pessoas,1): 
    idade = int(input("Idade da pessoa: "))
    soma += idade

    if(contador == 0):
        maior = idade
        menor = idade

    else:

        if(idade > maior):
            maior=idade

        if(idade<menor):
            menor=idade

media=soma/pessoas

print(f"A maior idade é: {maior}\nA menor idade é: {menor}\nA média das idades é: {media:,.2f}")
