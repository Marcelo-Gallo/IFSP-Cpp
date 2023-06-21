"""
Criar um algoritmo que leia oos elementos de uma matriz inteira 5x5 e escreva os elementos da diagonal principal.
"""
#Variáveis:
linha = 0 
coluna = 0
mat = [[0]*5, [0]*5, [0]*5, [0]*5, [0]*5]

#Algoritmo:
for linha in range(0,5,1):
    for coluna in range(0,5,1):
        mat[linha][coluna] = int(input(f"Informe o valor para [{linha}],[{coluna}]"))

linha = 0
coluna = 0

print("Os valores da diagonal principal são: ")
while(linha<5):
    print(f"[{mat[linha][coluna]}]", end=" ")
    linha += 1
    coluna += 1

'''
resolução Gobbi:

print("Os valores da diagonal principal são: ")

for linha in range(0,5,1):
    for coluna in range(0,5,1):
        if(linha==coluna):
            print(f"[{mat[linha][coluna]}]", end=' ')
        
'''
