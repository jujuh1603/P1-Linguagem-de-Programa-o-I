package desafio-roteiro06;

import java.util.Scanner;

public class Main5 {

    public static double celsius_para_fahrenheit(double c) {
        return (c * 9 / 5) + 32;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite Celsius: ");
        double c = sc.nextDouble();

        System.out.println("Fahrenheit: " + celsius_para_fahrenheit(c));

    }
}