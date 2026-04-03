package desafio-roteiro06;

import java.util.Scanner;

public class Main7 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int nota;

        System.out.print("Digite a nota: ");
        nota = sc.nextInt();

        if (nota >= 90)
            System.out.println("Categoria A");
        else if (nota >= 80)
            System.out.println("Categoria B");
        else if (nota >= 70)
            System.out.println("Categoria C");
        else if (nota >= 60)
            System.out.println("Categoria D");
        else
            System.out.println("Categoria E");

    }
}