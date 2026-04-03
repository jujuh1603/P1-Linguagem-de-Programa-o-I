package desafio-roteiro06;

import java.util.Scanner;

public class Main9 {

    public static int contar_vogais(String texto) {

        int contador = 0;

        texto = texto.toLowerCase();

        for (int i = 0; i < texto.length(); i++) {

            char c = texto.charAt(i);

            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                contador++;
        }

        return contador;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite uma frase: ");
        String texto = sc.nextLine();

        System.out.println("Vogais: " + contar_vogais(texto));

    }
}