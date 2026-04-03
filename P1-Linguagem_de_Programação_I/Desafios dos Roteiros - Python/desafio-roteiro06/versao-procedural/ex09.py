texto = input("Digite uma palavra ou frase: ")

contador = 0

for letra in texto.lower():
    if letra in "aeiou":
        contador += 1

print("Quantidade de vogais:", contador)