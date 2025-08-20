import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        BigInteger N = new BigInteger(st.nextToken());
        BigInteger quotient = N.divide(BigInteger.valueOf(7));
        if (N.compareTo(BigInteger.valueOf(22)) < 0) {
            if (N.compareTo(BigInteger.valueOf(3)) < 0) {
                bw.write(N.toString() + "\n");
            } else if (N.compareTo(BigInteger.valueOf(4)) < 0) {
                bw.write("2\n");
            } else if (N.compareTo(BigInteger.valueOf(7)) < 0) {
                bw.write("3\n");
            } else if (N.compareTo(BigInteger.valueOf(11)) < 0) {
                bw.write("4\n");
            } else if (N.compareTo(BigInteger.valueOf(16)) < 0) {
                bw.write("5\n");
            } else if (N.compareTo(BigInteger.valueOf(22)) < 0) {
                bw.write("6\n");
            } else {
                bw.write("7\n");
            }
        } else {
            if (N.remainder(BigInteger.valueOf(7)).compareTo(BigInteger.ZERO) > 0) {
                quotient = quotient.add(BigInteger.ONE);
            }
            BigInteger result = quotient.add(BigInteger.valueOf(3));
            bw.write(result.toString() + "\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
