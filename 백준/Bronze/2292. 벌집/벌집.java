import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken()) - 1;
        int count = 1;
        int result = 1;

        while (N > 0) {
            N -= count * 6;
            count++;
            result++;
        }

        bw.write(result + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
