import java.io.*;

public class Premutation {
    public static void main(String[] args){
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader buff = new BufferedReader(isr);

        int t;

        try{
            t = Integer.parseInt(buff.readLine());
        } catch (Exception e){
            t = 0;
            e.printStackTrace();
        }

        for(int i = 0; i < t; i++){
            int n;

            try{
                n = Integer.parseInt(buff.readLine());
            } catch (Exception e){
                n = 0;
                e.printStackTrace();
            }

            for(int j = 0; j < n; j++){
                int[] aux;
                try{
                    n = Integer.parseInt(buff.readLine());
                } catch (Exception e){
                    n = 0;
                    e.printStackTrace();
                }
            }
        }
    }
}
