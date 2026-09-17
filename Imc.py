peso = float(input("Digite seu peso (kg): "))
altura = float(input("Digite sua altura (m): "))
imc = peso / (altura ** 2)
if imc < 18.5:
    classificacao = "Abaixo do peso"
elif imc < 25:
    classificacao = "Normal"
elif imc < 30:
    classificacao = "Sobrepeso"
elif imc < 35:
    classificacao = "Obesidade Grau I"
elif imc < 40:
    classificacao = "Obesidade Grau II"
else:
    classificacao = "Obesidade Grau III"
print(f"Seu IMC é: {imc:.2f}")
print(f"Classificação: {classificacao}")
