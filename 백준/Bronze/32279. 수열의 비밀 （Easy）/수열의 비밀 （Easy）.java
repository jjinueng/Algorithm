import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int p = Integer.parseInt(st.nextToken());
        int q = Integer.parseInt(st.nextToken());
        int r = Integer.parseInt(st.nextToken());
        int s = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int a[] = new int[n+1];
        a[0] = 0;
        a[1] = Integer.parseInt(st.nextToken());

        int sum = 0;

        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                a[i] = (p * a[i / 2] + q);
            } else {
                a[i] = (r * a[i / 2] + s);
            }
        }

        for (int i = 1; i <= n; i++) {
            sum += a[i];
        }

        bw.write(String.valueOf(sum) + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
