import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Usamos 'int[]' para arrays de tamanho fixo
        Scanner scanner = new Scanner(System.in);
        int[] matrizA = new int[15];
        int[] matrizB = new int[15];

        System.out.println("--- Preenchendo a Matriz A ---");
        for (int i = 0; i < 15; i++) {
            while (true) {
                try {
                    System.out.print("Digite o " + (i + 1) + "o elemento para a matriz A: ");
                    matrizA[i] = Integer.parseInt(scanner.nextLine());
                    break;
                } catch (NumberFormatException e) {
                    System.out.println("Entrada invalida. Por favor, digite um numero inteiro.");
                }
            }
        }
        
        // Construir a Matriz B com os quadrados de A
        for (int i = 0; i < 15; i++) {
            matrizB[i] = matrizA[i] * matrizA[i];
        }
        
        // Apresentar os resultados
        System.out.println("\n--- Matriz A ---");
        for (int elemento : matrizA) {
            System.out.print(elemento + " ");
        }
        System.out.println();
        
        System.out.println("\n--- Matriz B (Quadrados da Matriz A) ---");
        for (int elemento : matrizB) {
            System.out.print(elemento + " ");
        }
        System.out.println();
    }
}