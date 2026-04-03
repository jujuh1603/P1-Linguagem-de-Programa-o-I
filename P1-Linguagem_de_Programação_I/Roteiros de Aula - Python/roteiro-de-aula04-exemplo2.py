matriz_A = []
matriz_B = []

print("--- Preenchendo a Matriz A ---")
for i in range(15):
    while True:
        try:
            elemento = int(input(f"Digite o {i+1}º elemento para a matriz A: "))
            matriz_A.append(elemento)
            break
        except ValueError:
            print("Entrada inválida. Por favor, digite um número inteiro.")

for elemento_a in matriz_A:
    matriz_B.append(elemento_a ** 2)

print("\n--- Matriz A ---")
print(matriz_A)

print("\n--- Matriz B (Quadrados da Matriz A) ---")
print(matriz_B)