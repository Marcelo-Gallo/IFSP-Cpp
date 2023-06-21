"""
Criar um algoritmo que leia 10 números pelo teclado e exiba os números na ordem inversa da que foram digitados.
"""

#variáveis:
cont = 0.0
vet = [0.0]*10

#algoritmo:
for cont in range(0,10,1):
    vet[cont] = float(input(f"Informe um número para a posição{cont}: "))

print("=====Mostrando a ordem inversa=====")
for cont in range(9,-1,-1):
    #começo em 9 pq o 10 não conta la encima
    print(f"[{vet[cont]}]", end=" ")