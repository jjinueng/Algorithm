import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        while (true) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            if (N == 0) break;
            int prev = -1;

            for (int i = 0; i < N; i++) {
                int num = Integer.parseInt(st.nextToken());
                if (i > 0 && num == prev) continue;
                prev = num;
                bw.write(num + " ");
            }

            bw.write("$ \n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
