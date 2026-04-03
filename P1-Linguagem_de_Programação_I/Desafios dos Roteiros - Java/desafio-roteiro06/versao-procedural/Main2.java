package desafio-roteiro06;

import java.util.Scanner;

public class Main2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double base, altura, area;

        System.out.print("Digite a base: ");
        base = sc.nextDouble();

        System.out.print("Digite a altura: ");
        altura = sc.nextDouble();

        area = base * altura;

        System.out.println("Área do retângulo: " + area);

    }
}
