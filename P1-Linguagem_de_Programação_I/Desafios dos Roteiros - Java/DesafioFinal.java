import java.util.Scanner;

public class DesafioFinal {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] nomes = new String[3];
        int[] quantidades = new int[3];

        for(int i = 0; i < 3; i++){

            System.out.print("Nome do produto: ");
            nomes[i] = sc.next();

            System.out.print("Quantidade: ");
            quantidades[i] = sc.nextInt();
        }

        System.out.println("\nRelatório Final:");

        for(int i = 0; i < 3; i++){

            if(quantidades[i] < 5){
                System.out.println("Produto: " + nomes[i] +
                        " | Estoque: " + quantidades[i] +
                        " unidades [REPOSIÇÃO NECESSÁRIA]");
            } else {
                System.out.println("Produto: " + nomes[i] +
                        " | Estoque: " + quantidades[i] + " unidades");
            }
        }
    }
}