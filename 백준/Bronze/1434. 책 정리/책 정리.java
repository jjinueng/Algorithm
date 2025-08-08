import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        Vector<Integer> arrA = new Vector<>(N);
        Vector<Integer> arrB = new Vector<>(M);

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arrA.add(Integer.parseInt(st.nextToken()));
        }

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < M; i++) {
            arrB.add(Integer.parseInt(st.nextToken()));
        }

        int result = 0;

        while (!arrA.isEmpty() && !arrB.isEmpty()) {
            if (arrB.get(0) <= arrA.get(0)) {
                arrA.set(0, arrA.get(0) - arrB.get(0));
                arrB.remove(0);
            } else {
                result += arrA.get(0);
                arrA.remove(0);
            }
        }

        while (!arrA.isEmpty()) {
            result += arrA.get(0);
            arrA.remove(0);
        }

        System.out.println(result);

        bw.flush();
        bw.close();
        br.close();
    }
}
