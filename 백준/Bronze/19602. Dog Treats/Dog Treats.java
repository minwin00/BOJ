import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a;
        int sum =0;
        for (int i=1; i<=3; i++){
            a = scanner.nextInt();
            sum += i*a;
        }
        if (sum >= 10) System.out.print("happy");
        else System.out.print("sad");
    }
}