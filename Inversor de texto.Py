texto = input("Digite uma palavra ou frase: ")
invertido = ""
for i in range(len(texto) - 1, -1, -1):
    invertido += texto[i]
print("Texto invertido:", invertido)
