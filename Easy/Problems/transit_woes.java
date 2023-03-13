import java.util.Scanner;

public class transit_woes {
    public static void main(String[] args) {
        int start;
        int class_start;
        int switches;
        int time;

        Scanner scanner = new Scanner(System.in);
        start = Integer.parseInt(scanner.next());
        class_start = Integer.parseInt(scanner.next());
        switches = Integer.parseInt(scanner.next());

        int[] walk_times = new int[switches+1];
        int[] ride_times = new int[switches];
        int[] intervals = new int[switches];
        for (int i = 0; i < switches+1; i++) {
            walk_times[i] = Integer.parseInt(scanner.next());
        }
        for (int i = 0; i < switches; i++) {
            ride_times[i] = Integer.parseInt(scanner.next());
        }
        for (int i = 0; i < switches; i++) {
            intervals[i] = Integer.parseInt(scanner.next());
        }

        time = start;
        for (int i = 0; i <= switches+1; i++) {
            time += walk_times[0];
            if (time <= intervals[0]) {
                time += ride_times[0];
            }
        }
        if (time <= class_start) {
            System.out.println("yes");
        }
        else {
            System.out.println("no");
        }
    }
}
