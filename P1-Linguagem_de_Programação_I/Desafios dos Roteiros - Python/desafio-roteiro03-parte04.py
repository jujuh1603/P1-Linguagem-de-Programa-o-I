numero_secreto = 7
tentativa = 0

while tentativa != numero_secreto:
    tentativa = int(input("Adivinhe o número: "))

    if tentativa > numero_secreto:
        print("Tente um número menor!")
    elif tentativa < numero_secreto:
        print("Tente um número maior!")

print("Parabéns! Você acertou!")