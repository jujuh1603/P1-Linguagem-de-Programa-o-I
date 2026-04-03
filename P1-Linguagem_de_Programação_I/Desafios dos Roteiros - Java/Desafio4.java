import java.util.Scanner;

public class Desafio4 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int numeroSecreto = 7;
        int tentativa = 0;

        while(tentativa != numeroSecreto){

            System.out.print("Adivinhe o numero: ");
            tentativa = scanner.nextInt();

            if(tentativa > numeroSecreto){
                System.out.println("Tente um numero menor!");
            } 
            else if(tentativa < numeroSecreto){
                System.out.println("Tente um numero maior!");
            }
        }

        System.out.println("Parabéns! Você acertou!");
    }
}