#variaveis:
cont = 0
vet = [""]*5

#algoritmo:
for cont in range(0,5,1):
    vet[cont] = input(f"Digite o dado da posição {cont}: ")

for cont in range(0,5,1):
    print(f"[{vet[cont]}]", end=' ')