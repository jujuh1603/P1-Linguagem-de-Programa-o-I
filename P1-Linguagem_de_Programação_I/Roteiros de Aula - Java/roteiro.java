import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int estoque;

        do {
            System.out.print("Digite a quantidade (não pode ser negativa): ");
            estoque = scanner.nextInt();
        } while (estoque < 0);

        System.out.println("Parabéns, você digitou o número errado. ");
        scanner.close();
    }
}