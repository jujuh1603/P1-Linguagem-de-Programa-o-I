package desafio-roteiro06;

import java.util.Scanner;

public class Main1 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int numero;

        System.out.print("Digite um numero inteiro: ");
        numero = sc.nextInt();

        if (numero % 2 == 0) {
            System.out.println("O numero é PAR");
        } else {
            System.out.println("O numero é IMPAR");
        }

    }
}
