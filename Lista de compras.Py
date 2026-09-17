lista = []
n = int(input("Quantos itens deseja cadastrar? "))
for i in range(n):
    nome = input(f"Item {i+1} - Nome: ")
    preco = float(input(f"Item {i+1} - Preço: R$ "))
    lista.append((nome, preco))
total = 0
print("\n--- Resumo da Compra ---")
for nome, preco in lista:
    print(f"{nome:<20} R$ {preco:.2f}")
    total += preco
print("------------------------")
print(f"{'Total:':<20} R$ {total:.2f}")
