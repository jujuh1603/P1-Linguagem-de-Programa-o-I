import java.util.*;

public class Desafio1 {
    public static void main(String[] args) {

        System.out.println("Números de 1 a 10:");
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
        }

        String[] nomes = {"Ana", "Carlos", "Julia", "Pedro", "Marina"};

        System.out.println("\nLista de nomes:");
        for (int i = 0; i < nomes.length; i++) {
            System.out.println(nomes[i]);
        }
    }
}