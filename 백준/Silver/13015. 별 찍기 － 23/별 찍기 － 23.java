import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());

        for(int i = 1; i < n; i++) {
            if(i==1){
                for(int j = 1; j <= n; j++) {
                    bw.write("*");
                }
                for (int j = 1; j < 2*(n-1); j++) {
                    bw.write(" ");
                }
                for (int j = 1; j <= n; j++) {
                    bw.write("*");
                }
            }
            else {
                for(int j = 1; j <= i-1; j++) {
                    bw.write(" ");
                }
                bw.write("*");
                for (int j = 1; j <= (n - 2); j++) {
                    bw.write(" ");
                }
                bw.write("*");
                for (int j = 1; j <= 2*(n-i)-1; j++) {
                    bw.write(" ");
                }
                bw.write("*");
                for (int j = 1; j <= (n - 2); j++) {
                    bw.write(" ");
                }
                bw.write("*");
            }
            bw.newLine();
        }

        for(int i = 1; i <= n-1; i++) {
            bw.write(" ");
        }
        bw.write("*");
        for (int i = 1; i <= (n - 2); i++) {
            bw.write(" ");
        }
        bw.write("*");
        for (int i = 1; i <= (n - 2); i++) {
            bw.write(" ");
        }
        bw.write("*");
        bw.newLine();

        for(int i = 1; i < n; i++) {
            if(i == n-1){
                for(int j = 1; j <= n; j++) {
                    bw.write("*");
                }
                for (int j = 1; j < 2*(n-1); j++) {
                    bw.write(" ");
                }
                for (int j = 1; j <= n; j++) {
                    bw.write("*");
                }
            }
            else {
                for(int j = 1; j <= n-1-i; j++) {
                    bw.write(" ");
                }
                bw.write("*");
                for (int j = 1; j <= (n - 2); j++) {
                    bw.write(" ");
                }
                bw.write("*");
                for (int j = 1; j <= 2*i-1; j++) {
                    bw.write(" ");
                }
                bw.write("*");
                for (int j = 1; j <= (n - 2); j++) {
                    bw.write(" ");
                }
                bw.write("*");
            }
            bw.newLine();
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
