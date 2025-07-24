import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        BigInteger cBig = new BigInteger(st.nextToken());
        int c = 0;
        if (cBig.mod(BigInteger.valueOf(2)).equals(BigInteger.ZERO)) {
            c = 2;
        } else {
            c = 1;
        }

        for (int i = 0; i < c; i++) {
            a = a ^ b;
        }

        bw.write(String.valueOf(a) + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
