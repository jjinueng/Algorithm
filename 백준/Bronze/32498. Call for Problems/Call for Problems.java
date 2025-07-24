import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        int count = 0;

        for (int i = 0; i < n; i++) {
            int d = Integer.parseInt(br.readLine());
            if (d % 2 != 0) count++;
        }

        bw.write(count + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
