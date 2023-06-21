#Variáveis:
cont = 0
vet = [0.0]*5

#algoritmo:
for cont in range(0,5,1):
    vet[cont] = float(input(f"Informe um valor para a posição {cont}: "))

for cont in range(0,5,1):
    print(f"[{vet[cont]}]", end=' ')

    