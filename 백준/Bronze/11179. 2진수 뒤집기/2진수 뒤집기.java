import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

        String binaryString = Integer.toBinaryString(N);
        StringBuilder reversedBinary = new StringBuilder(binaryString).reverse();
        int result = Integer.parseInt(reversedBinary.toString(), 2);
        bw.write(String.valueOf(result));

        bw.flush();
        bw.close();
        br.close();
    }
}
