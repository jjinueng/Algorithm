import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());

        char[] arr = new char[N];
        for (int i = 0; i < N; i++) {
            arr[i] = st.nextToken().charAt(0);
        }

        st = new StringTokenizer(br.readLine());
        int M = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        boolean isPurple = false;
        char[] arr2 = new char[M];

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < K; j++) {
                int idx = Integer.parseInt(st.nextToken()) - 1;
                char c = arr[idx];
                if (c == 'P') isPurple = true;
            }
            arr2[i] = isPurple ? 'P' : 'W';
            isPurple = false;
        }

        boolean hasWhite = false;
        for (char c : arr2) {
            if (c == 'W') {
                hasWhite = true;
                break;
            }
        }
        bw.write(hasWhite ? "W" : "P");

        bw.flush();
        bw.close();
        br.close();
    }
}
