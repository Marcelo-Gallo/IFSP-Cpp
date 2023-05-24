'''
Aula: 23/05/2023
Faça um programa que receba o salário base de um funcionário.
Calcule e mostre o salário a receber, sabendo que esse funcionário tem gratificação de R$50,00 e paga imposto de 10%sobre o salário base.
'''
#cls no prompt limpa ele

#Variáveis
base = 0.0
receber = 0.0
grat = 50.00
imposto = 0.1

#Algoritmo
base = float(input("Digite o salário base: R$"))

receber = grat + (base - (base * imposto))

print(f"O salário a receber é: R${receber}")
