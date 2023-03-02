import java.io.*;

public class DayOfPi {

    public static void main(String[] args){
        final char[] Pi = "314159265358979323846264338327".toCharArray();

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader (isr);

        int t;
        char[] pi_attempt;

        try {
            t = Integer.parseInt(br.readLine());
        } 
        catch (Exception e) {
            System.out.println("Se ha producido un error.");
            t = 0;

            e.printStackTrace();
        }

       for(int i = 0; i < t; i++){
            try {
                pi_attempt = br.readLine().toCharArray();
            }
            
            catch (Exception e){
                System.out.println("Se ha producido un error.");
                pi_attempt = new char[0];

                e.printStackTrace();
            }

            int acum = 0;

            for(int j = 0; j < pi_attempt.length; j++){
                if(Pi[j] == pi_attempt[j]){
                    acum++;
                }
                else{
                    break;
                }
            }
            System.out.println(acum);
        }
            
    }
}
