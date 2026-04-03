print("\nAdvinhe o número com 'while' em Python!")
num_secreto = 7
num_digitado = 0

while num_digitado != num_secreto:
    num_digitado = int(input("Digite um número: "))
    if num_digitado != num_secreto:
        print("Número incorreto. Tente novamente.")

print("Parabéns! Você acertou!")