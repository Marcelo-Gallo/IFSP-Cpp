'''
Uma escola está realizando matriculas para um curso aberto à comunidade, com limite  de 20 vagas.
Assumindo que os alunos são cadastrados por computador, escreva um algoritmo que:
-Leia a idade e o sexo do aluno;
-Informe que a turma está lotada, quando o número de incritos atingir a quantidade de vagas;
-Mostre a idade média dos candidatos;
-Mostre a quantidade de mulheres inscritas;
-Mostre os candidatos (homens e mulheres) maiores de idade.
'''

#Variaveis:
soma = 0
contador = 0
cont_mulher = 0
cont_maior = 0
media = 0.0
idade = 0
sexo = ""

#algoritmo

for contador in range(0,20,1):
    idade = int(input("Informe a idade do aluno: "))
    sexo = str(input("Informe o sexo do aluno (M ou F): ")).upper()
    soma += idade

    if(sexo == "F" ):
        cont_mulher += 1
    

    if(idade>=18):
        cont_maior += 1

media = soma/20

print("A turma está lotada!\n\n")

print(f"A idade média da turma é: {media}\nA quantidade e mulheres incritas é: {cont_mulher}\nDos inscritos {cont_maior} são maiores de idade.")