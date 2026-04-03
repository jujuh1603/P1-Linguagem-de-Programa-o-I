package desafio-roteiro06;

import java.util.Scanner;

public class Main4 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String nome;
        int idade;

        System.out.print("Digite seu nome: ");
        nome = sc.next();

        System.out.print("Digite sua idade: ");
        idade = sc.nextInt();

        System.out.println("Bem-vindo(a) " + nome + "! Você tem " + idade + " anos.");

    }
}