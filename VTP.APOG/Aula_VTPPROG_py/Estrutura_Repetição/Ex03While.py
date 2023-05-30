'''
Faça um algoritmo que solicite N números inteiros até que p número 0 seja digitado.
Ao final o algoritmo deve informar o maior e o menor número digitado.
obs: O numero 0 não pode ser computado.
'''

#variáveis:
numero = 0
maior = 0
menor = 0

numero = int(input("Digite um número inteiro: "))
maior = numero
menor = numero

while (numero != 0):

    if(numero>maior):
        maior=numero

    if(numero<menor) and (numero!=0):
        menor=numero

    numero = int(input("Digite um número inteiro: "))

print(f"O maior número digitado foi: {maior}")
print(f"O menor numero digitado foi: {menor}")

