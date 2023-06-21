"""
Faça um algoritmo que leia 30 numeroes reais em um vetor e depois mostre os números localizados nas posições impares.
"""

#variáveis
cont = 0
vet = [0.0]*30

#algoritmo:
for cont in range(0,30,1):
    vet[cont] = float(input("Informe um número real: "))

for cont in range(0,30,1):
    if(cont%2!=0):
        print(f"[{vet[cont]}]",end=" ")
