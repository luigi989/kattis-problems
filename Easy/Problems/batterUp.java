import java.util.Scanner;

public class batter_up {
    public static void main(String[] args) {

        int at_bats;
        double sum = 0;
        int walk = 0;
        int temp;

        Scanner scanner = new Scanner(System.in);
        at_bats = Integer.parseInt(scanner.next());

        for (int i = 0; i < at_bats; i++) {
            temp = Integer.parseInt(scanner.next());
            if (temp != -1) {
               sum += temp;
            }
            else {
                walk++;
            }
        }
        at_bats -= walk;
        System.out.println(sum/at_bats);
    }
}

