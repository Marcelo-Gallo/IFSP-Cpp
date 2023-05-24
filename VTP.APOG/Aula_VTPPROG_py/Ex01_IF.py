'''
Aula: 23/05/2023
Você esta fazendo um trbalho de classificação de solo. Após colher uma amostra e verificar a quantidade de pontos de água presente nela,
classificou a amostra em:
    Rochosa: se menos ou igual a 10 pontos de água.
    Firme: se mais do que 10 e menos ou igual a 40 pontos.
    Pantanosa: se mais do que 40 e menos ou igual a 80 pontos.
    Quantidade Inválida: se mais do que 80 pontos.
'''

#Variaveis
amostra = 0
veredito = ""

#algoritmo
print("\n=========Classificador de amostras=========")
print("Digite apenas numeros positivos.\n")
amostra = int(input("Informe a quantidade de pontos d'agua: "))

#EU PODERIA TER COLOCADO O PRINT DENTRO DE CADA IF, SEM PROBLEMAS.

if(amostra<=10) and (amostra>0):
    veredito = "Rochosa"
else:
    if(amostra>10) and (amostra<=40):
        veredito = "Firme"
    else:
        if(amostra>40) and (amostra<=80):
            veredito = "Pantanosa"
        else:
            veredito = "Quantidade de pontos inválida!"

print(f"A amostra é: {veredito}")
print("===========================================\n")