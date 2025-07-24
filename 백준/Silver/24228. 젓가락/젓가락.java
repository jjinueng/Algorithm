import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        BigInteger N = new BigInteger(st.nextToken());
        BigInteger R = new BigInteger(st.nextToken());

        BigInteger two = new BigInteger("2");
        BigInteger one = new BigInteger("1");

        BigInteger result = R.multiply(two).add(N.subtract(one));

        bw.write(result.toString() + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
