package desafio-roteiro06;

import java.util.Scanner;

public class Main8 {

    public static String classificar_triangulo(int a, int b, int c) {

        if (a == b && b == c)
            return "Equilatero";
        else if (a == b || a == c || b == c)
            return "Isosceles";
        else
            return "Escaleno";
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a, b, c;

        System.out.print("Digite os lados: ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        System.out.println(classificar_triangulo(a, b, c));

    }
}