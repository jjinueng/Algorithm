import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        BigInteger H = new BigInteger(st.nextToken());

        if (H.equals(BigInteger.ONE)) {
            bw.write("2\n");
        } else {
            bw.write("1\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
