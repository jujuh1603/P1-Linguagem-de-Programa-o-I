package desafio-roteiro06;

import java.util.Scanner;

public class Main4 {

    public static String gerar_mensagem_boas_vindas(String nome, int idade) {
        return "Bem-vindo(a) " + nome + "! Você tem " + idade + " anos.";
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite seu nome: ");
        String nome = sc.next();

        System.out.print("Digite sua idade: ");
        int idade = sc.nextInt();

        System.out.println(gerar_mensagem_boas_vindas(nome, idade));

    }
}