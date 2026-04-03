import java.util.*;

public class Estoque {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        ArrayList<String> nomes = new ArrayList<>();
        ArrayList<Integer> quantidades = new ArrayList<>();
        ArrayList<Double> precos = new ArrayList<>();

        int opcao = 0;

        while(opcao != 3){

            System.out.println("\n1 - Adicionar produto");
            System.out.println("2 - Listar produtos");
            System.out.println("3 - Sair");

            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();
            scanner.nextLine();

            if(opcao == 1){

                System.out.print("Nome do produto: ");
                String nome = scanner.nextLine();

                System.out.print("Quantidade: ");
                int qtd = scanner.nextInt();

                if(qtd < 0){
                    System.out.println("Erro: quantidade não pode ser negativa.");
                    continue;
                }

                System.out.print("Preço: ");
                double preco = scanner.nextDouble();

                nomes.add(nome);
                quantidades.add(qtd);
                precos.add(preco);

            }

            else if(opcao == 2){

                for(int i = 0; i < nomes.size(); i++){
                    System.out.println("\nProduto: " + nomes.get(i));
                    System.out.println("Quantidade: " + quantidades.get(i));
                    System.out.println("Preço: " + precos.get(i));
                }

            }
        }

        System.out.println("Sistema encerrado.");
    }
}