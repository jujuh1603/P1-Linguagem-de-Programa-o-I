package desafio-roteiro06;

import java.util.Scanner;

public class Main6 {

    public static double aplicar_desconto(double valor, double desconto) {
        return valor - (valor * desconto / 100);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Valor do produto: ");
        double valor = sc.nextDouble();

        System.out.print("Desconto (%): ");
        double desconto = sc.nextDouble();

        System.out.println("Valor final: " + aplicar_desconto(valor, desconto));

    }
}