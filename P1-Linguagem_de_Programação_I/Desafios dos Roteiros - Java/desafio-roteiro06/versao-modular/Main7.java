package desafio-roteiro06;

import java.util.Scanner;

public class Main7 {

    public static char classificar_nota(int nota) {

        if (nota >= 90) return 'A';
        else if (nota >= 80) return 'B';
        else if (nota >= 70) return 'C';
        else if (nota >= 60) return 'D';
        else return 'E';
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite a nota: ");
        int nota = sc.nextInt();

        System.out.println("Categoria: " + classificar_nota(nota));

    }
}