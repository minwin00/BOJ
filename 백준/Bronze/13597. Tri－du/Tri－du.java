import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b, c=0;
        a = scanner.nextInt();
        b = scanner.nextInt();
        c = (a>b) ? a : b;
        System.out.print(c);
    }
}
