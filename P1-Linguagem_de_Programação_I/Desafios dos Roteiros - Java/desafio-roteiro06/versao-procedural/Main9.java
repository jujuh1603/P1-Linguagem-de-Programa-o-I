package desafio-roteiro06;

import java.util.Scanner;

public class Main9 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String texto;
        int contador = 0;

        System.out.print("Digite uma frase: ");
        texto = sc.nextLine();

        texto = texto.toLowerCase();

        for (int i = 0; i < texto.length(); i++) {

            char c = texto.charAt(i);

            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                contador++;
        }

        System.out.println("Total de vogais: " + contador);

    }
}