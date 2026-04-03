produtos = []

while True:
    print("\n====== SORVETERIA GELADA ======")
    print("1 - Adicionar novo produto")
    print("2 - Listar produtos em estoque")
    print("3 - Sair")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        nome = input("Nome do produto: ")
        
        while True:
            quantidade = int(input("Quantidade: "))
            if quantidade >= 0:
                break
            else:
                print("Quantidade não pode ser negativa. Tente novamente.")
        
        preco = float(input("Preço: R$ "))

        produto = {
            "nome": nome,
            "quantidade": quantidade,
            "preco": preco
        }

        produtos.append(produto)

        print("Produto cadastrado com sucesso!")

    elif opcao == "2":
        if len(produtos) == 0:
            print("Nenhum produto cadastrado.")
        else:
            print("\n--- Produtos em Estoque ---")
            for p in produtos:
                print(f"Nome: {p['nome']}")
                print(f"Quantidade: {p['quantidade']}")
                print(f"Preço: R$ {p['preco']:.2f}")
                print("--------------------------")

    elif opcao == "3":
        print("Encerrando o sistema...")
        break

    else:
        print("Opção inválida. Tente novamente.")