import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        while (true) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            if (n == -1) {
                break;
            }

            Vector<Integer> arr = new Vector<>();
            for (int i = 1; i < n; i++) {
                if(n % i == 0) {
                    arr.add(i);
                }
            }

            int sum = 0;

            for (int i = 0; i < arr.size(); i++) {
                sum += arr.get(i);
            }
            if (sum == n) {
                bw.write(n + " = ");
                for (int i = 0; i < arr.size(); i++) {
                    bw.write(arr.get(i).toString());
                    if (i < arr.size() - 1) {
                        bw.write(" + ");
                    }
                }
                bw.newLine();
            } else {
                bw.write(n + " is NOT perfect.");
                bw.newLine();
            }
        }

        bw.flush();
        bw.close();
        br.close();
    }
}