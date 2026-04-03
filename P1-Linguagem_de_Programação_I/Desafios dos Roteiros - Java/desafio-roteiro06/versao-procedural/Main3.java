package desafio-roteiro06;

import java.util.Scanner;

public class Main3 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String senha;

        while (true) {

            System.out.print("Digite a senha: ");
            senha = sc.next();

            if (senha.length() >= 8) {
                System.out.println("Senha válida!");
                break;
            } else {
                System.out.println("Senha inválida. Tente novamente.");
            }
        }

    }
}
