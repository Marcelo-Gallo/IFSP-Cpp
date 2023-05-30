'''
Aula: 23/05/2023
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos
ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o 
percentual de impostos.
 Calcule e mostre:
  a) O valor correspondente ao lucro do distribuidor
  b) O valor correspondente ao imposto
  c) O preço final de veículo
'''
#Variaveis
fab = 0.0
dis = 0.0
imp =0.0
pdis = 0.0
pimp = 0.0
fin = 0.0
val_imp = 0.0
val_dis = 0.0

#Algoritmo
fab = float(input("\nInforme o preço de fabrica do carro: R$"))
dis = float(input("Informe o percentual de lucro do distribuidor: "))
imp = float(input("Informe o percentual de impostos: "))

pdis = dis/100
pimp = imp/100

fin = fab + (pdis * fab ) + (pimp *fab)
val_dis = pdis*fab
val_imp = pimp*fab

# (xxxxx:,.2f) -> duas casa aspos a virgula (f de flutuante)
print()
print("Os dados informados foram:")
print(f"Percentual de lucro do distribuidor: {dis:,.2f}")
print(f"Percentual de impostos: {imp:,.2f}")
print(f"Preço de fábrica: R${fab:,.2f}")
print()
print(f"O lucro do distribuidor é: R${val_dis:,.2f}")
print(f"O valor do imposto é: R${val_imp:,.2f}")
print(f"O valor final do veiculo é: R${fin:,.2f}")
