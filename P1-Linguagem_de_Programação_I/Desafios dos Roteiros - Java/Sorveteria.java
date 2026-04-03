import java.util.Scanner;

public class Sorveteria {

    public static void exibirCabecalho() {
        System.out.println("=================================");
        System.out.println("      SORVETERIA DO DENER");
        System.out.println("    Sistema de Controle de Estoque");
        System.out.println("=================================");
    }

    public static String verificarEstoqueCritico(int quantidade) {
        if (quantidade < 5) {
            return "[REPOSIÇÃO NECESSÁRIA]";
        } else {
            return "";
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        exibirCabecalho();

        String[] nomes = new String[3];
        int[] quantidades = new int[3];

        int i = 0;

        while (i < 3) {

            System.out.print("Digite o nome do insumo: ");
            nomes[i] = sc.next();

            System.out.print("Digite a quantidade: ");
            quantidades[i] = sc.nextInt();

            i++;
        }

        System.out.println("\nRelatório de Estoque:");

        i = 0;

        while (i < nomes.length) {

            String aviso = verificarEstoqueCritico(quantidades[i]);

            System.out.println("Produto: " + nomes[i] +
                    " | Estoque: " + quantidades[i] +
                    " unidades " + aviso);

            i++;
        }
    }
}