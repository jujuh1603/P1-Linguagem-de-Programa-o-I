matriz_A = []

print("--- Digite 10 nomes ---")
for i in range(10):
    nome = input(f"Digite o {i+1}º nome: ")
    matriz_A.append(nome)

print("\n--- Nomes Inseridos ---")
for nome in matriz_A:
    print(nome)