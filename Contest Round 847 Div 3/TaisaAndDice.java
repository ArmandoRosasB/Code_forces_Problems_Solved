import java.io.*;
import java.util.Scanner;

public class TaisaAndDice {
    public static void main(String args[]) {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader buff = new BufferedReader(isr);

        int t;

        try {
            t = Integer.parseInt(buff.readLine());
        } catch (Exception e) {
            t = 0;
            e.printStackTrace();
        }

        for(int i = 0; i < t; i++){
            String line;
            int n, s, r;

            try {
                line = buff.readLine();

            } catch (Exception e) {
                line = "";
                e.printStackTrace();
            }

            Scanner scanner = new Scanner(line);
            n = scanner.nextInt();
            s = scanner.nextInt();
            r = scanner.nextInt();

            int max, dice, remainder, x;

            max = s - r;
            dice = n - 1;
            remainder = r % dice;
            x = r / (n - 1);

            System.out.print(max + " ");

            for(int j = 0; j < n - 1; j++){
                if (remainder > 0){
                    System.out.print(x + 1);
                    remainder--;

                } else {
                    System.out.print(x);
                }

                System.out.print(" ");
            }

            System.out.println();
        }
    }
}