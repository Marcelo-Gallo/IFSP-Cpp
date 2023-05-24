'''
Aula: 23/05/2023
'''

#Variaveis

nome = ""
nota1 = 0.0
nota2 = 0.0
media = 0.0

#Algoritmo
nome = input("Informe o NOME do aluno: ")
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

media = (nota1 + nota2)/2

#print("{} a sua média é: {}".format(nome,media))

print(f"{nome}, a sua média é: {media}")
