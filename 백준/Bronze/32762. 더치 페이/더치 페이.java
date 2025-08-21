import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            st.nextToken();
            st.nextToken();
        }

        long total = 0;
        for (int j = 0; j < M; j++) {
            st = new StringTokenizer(br.readLine());
            st.nextToken();
            total += Integer.parseInt(st.nextToken());
        }

        double average = (double) total / N;
        bw.write(String.format("%.5f", average) + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
