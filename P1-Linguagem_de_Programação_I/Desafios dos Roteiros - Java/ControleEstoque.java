import java.util.Scanner;

public class ControleEstoque {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome do produto: ");
        String nome = scanner.nextLine();

        System.out.print("Digite o preço do produto: ");
        double preco = scanner.nextDouble();

        System.out.print("Digite a quantidade em estoque: ");
        int qtd = scanner.nextInt();

        if (qtd < 0) {
            System.out.println("Erro: A quantidade não pode ser um valor negativo. Por favor, tente novamente.");
        } else {
            System.out.println("\nProduto cadastrado com sucesso!");
            System.out.println("Resumo do produto:");
            System.out.println("Nome: " + nome);
            System.out.println("Preço: R$ " + preco);
            System.out.println("Quantidade em estoque: " + qtd);
        }

        scanner.close();
    }
}
