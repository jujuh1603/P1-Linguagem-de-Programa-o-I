package desafio-roteiro06;

import java.util.Scanner;

public class Main2 {

    public static double calcular_area_retangulo(double base, double altura) {
        return base * altura;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite a base: ");
        double base = sc.nextDouble();

        System.out.print("Digite a altura: ");
        double altura = sc.nextDouble();

        double area = calcular_area_retangulo(base, altura);

        System.out.println("Área: " + area);

    }
}