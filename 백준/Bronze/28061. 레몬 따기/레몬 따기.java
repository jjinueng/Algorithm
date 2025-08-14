import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

        int[] lemons = new int[N];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            lemons[i] = Integer.parseInt(st.nextToken());
            lemons[i] -= N - i;
        }

        Arrays.sort(lemons);
        bw.write(lemons[N - 1] + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
