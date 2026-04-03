package desafio-roteiro06;

import java.util.Scanner;

public class Main1 {

    public static void verificar_paridade(int numero) {
        if (numero % 2 == 0)
            System.out.println("O numero é PAR");
        else
            System.out.println("O numero é IMPAR");
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um numero: ");
        int numero = sc.nextInt();

        verificar_paridade(numero);
    }
}