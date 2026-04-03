import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Usamos 'String[]' para arrays de Strings de tamanho fixo
        String[] matrizA = new String[10];

        System.out.println("--- Digite 10 nomes ---");
        for (int i = 0; i < 10; i++) {
            System.out.print("Digite o " + (i + 1) + "o nome: ");
            matrizA[i] = scanner.nextLine();
        }

        // Apresentar os nomes
        System.out.println("\n--- Nomes Inseridos ---");
        for (String nome : matrizA) {
            System.out.println(nome);
        }
    }
}