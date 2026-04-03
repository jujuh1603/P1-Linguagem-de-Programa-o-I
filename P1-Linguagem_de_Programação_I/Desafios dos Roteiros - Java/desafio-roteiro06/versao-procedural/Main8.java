package desafio-roteiro06;

import java.util.Scanner;

public class Main8 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a, b, c;

        System.out.print("Digite os tres lados: ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        if (a == b && b == c)
            System.out.println("Equilatero");
        else if (a == b || a == c || b == c)
            System.out.println("Isosceles");
        else
            System.out.println("Escaleno");

    }
}