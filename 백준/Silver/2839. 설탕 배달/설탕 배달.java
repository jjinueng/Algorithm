import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

        int count = 0;
        while (N >= 0) {
            if (N % 5 == 0) {
                count += N / 5;
                bw.write(count + "\n");
                break;
            }
            N -= 3;
            count++;
        }
        if (N < 0) {
            bw.write("-1\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
