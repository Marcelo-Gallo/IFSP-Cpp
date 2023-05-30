'''
Aula: 23/05/2023
'''

#Variaveis
nome = ""
situação = ""
nota1 = 0.0
nota2 = 0.0
media = 0.0

#algoritmo
nome = input("Informe o nome do aluno: ")
nota1 = float(input("Informe a nota 1: "))
nota2 = float(input("Informe a nota 2: "))

media = (nota1 + nota2) /2

if(media>=6):
    situação="Aprovado!"
else:
    if(media>=4) and (media<6):
        situação = "De Recuperação!"
    else:
        situação = "Reprovado!"
print(f"{nome}, a média é: {media} e você está {situação}.")