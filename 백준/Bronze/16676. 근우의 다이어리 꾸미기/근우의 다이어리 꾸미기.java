import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int length = String.valueOf(N).length();

        StringBuilder a = new StringBuilder();
        for (int i = 0; i < length - 1; i++) {
            a.append('1');
        }
        a.append('0');

        int num = Integer.parseInt(a.toString());

        if (N < num) {
            bw.write(length - 1 + "\n");
        } else {
            bw.write(length + "\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}