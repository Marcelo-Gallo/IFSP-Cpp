#variáveis:
cont = 0
vet = [0]*5

#algoritmo:
for cont in range (0,5,1):
    vet[cont] = int(input(f"Informe um numero para a posição {cont}: "))

for cont in range (0,5,1):
    vet[cont] = print(f"[{vet[cont]}]", end=' ')