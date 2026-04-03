import java.util.Scanner;

public class CalculoROI {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o ganho obtido: ");
        double ganho = scanner.nextDouble();

        System.out.print("Digite o valor investido: ");
        double investimento = scanner.nextDouble();

        if (investimento == 0) {
            System.out.println("Erro: o investimento não pode ser zero.");
        } else {
            double roi = (ganho - investimento) / investimento;
            System.out.println("ROI: " + roi);
        }

        scanner.close();
    }
}
