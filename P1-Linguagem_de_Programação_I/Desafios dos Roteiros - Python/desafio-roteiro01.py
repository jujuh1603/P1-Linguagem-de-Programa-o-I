ganho = float(input("Digite o ganho obtido: "))
invest = float(input("Digite o valor investido: "))

if invest == 0:
    print("Erro: O investimento não pode ser zero.")
else:
    roi = (ganho - invest) / invest
    print("ROI: ", roi)