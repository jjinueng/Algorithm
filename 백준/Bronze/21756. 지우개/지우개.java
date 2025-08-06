import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

        Vector<Integer> v = new Vector<>();
        for (int i = 0; i < N; i++) {
            v.add(i + 1);
        }

        while (v.size() > 1) {
            for (int i = 0; i < v.size(); i++) {
                if (i % 2 == 0) {
                    v.set(i, -1);
                }
            }
            for (int i = v.size() - 1; i >= 0; i--) {
                if (v.get(i) == -1) {
                    v.remove(i);
                }
            }
        }

        bw.write(String.valueOf(v.get(0)));

        bw.flush();
        bw.close();
        br.close();
    }
}
