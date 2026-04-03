nome = input("Digite o nome do produto: ")
preco = float(input("Digite o preço do produto: "))
qtd = int(input("Digite a quantidade em estoque: "))

if qtd < 0:
    print("Erro: A quantidade não pode ser um valor negativo. Tente novamente.")
else:
    print("\nProduto cadastrado com sucesso!")
    print("Resumo do produto:")
    print("Nome:", nome)
    print("Preço: R$", preco)
    print("Quantidade em estoque:", qtd)