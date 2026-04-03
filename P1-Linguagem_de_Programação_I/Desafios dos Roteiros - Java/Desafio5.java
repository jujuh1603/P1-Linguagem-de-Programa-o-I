import java.util.Scanner;

public class Desafio5 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String senhaCorreta = "senha123";
        String senha = "";

        while(!senha.equals(senhaCorreta)){
            System.out.print("Digite a senha: ");
            senha = scanner.nextLine();
        }

        System.out.println("Bem-vindo ao sistema!");
    }
}