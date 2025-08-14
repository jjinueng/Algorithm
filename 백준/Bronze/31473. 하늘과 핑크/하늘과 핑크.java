import java.io.*;
import java.util.*;

public class Main {
    private static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int aSum = 0;
        for (int i = 0; i < N; i++) {
            aSum += Integer.parseInt(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        int bSum = 0;
        for (int i = 0; i < N; i++) {
            bSum += Integer.parseInt(st.nextToken());
        }

        int gcd = gcd(aSum, bSum);

        int aResult = bSum / gcd;
        int bResult = aSum / gcd;

        bw.write(aResult + " " + bResult + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
