package desafio-roteiro06;

import java.util.Scanner;

public class Main6 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double valor, desconto, finalValor;

        System.out.print("Digite o valor do produto: ");
        valor = sc.nextDouble();

        System.out.print("Digite o desconto (%): ");
        desconto = sc.nextDouble();

        finalValor = valor - (valor * desconto / 100);

        System.out.println("Valor final: " + finalValor);

    }
}