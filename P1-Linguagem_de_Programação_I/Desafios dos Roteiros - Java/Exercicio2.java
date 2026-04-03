import java.util.Scanner;

public class Exercicio2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double[] A = new double[20];
        double[] B = new double[20];
        double[] C = new double[20];

        System.out.println("Digite 20 números para A");

        for(int i = 0; i < 20; i++){
            A[i] = sc.nextDouble();
        }

        System.out.println("Digite 20 números para B");

        for(int i = 0; i < 20; i++){
            B[i] = sc.nextDouble();
        }

        for(int i = 0; i < 20; i++){
            C[i] = A[i] - B[i];
        }

        System.out.println("Resultado da matriz C:");

        for(int i = 0; i < 20; i++){
            System.out.println(C[i]);
        }
    }
}