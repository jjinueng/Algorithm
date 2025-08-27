import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());

        List<Integer> divisors = new ArrayList<>();
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                divisors.add(i);
                if (i != n / i) {
                    divisors.add(n / i);
                }
            }
        }

        int minSurfaceArea = Integer.MAX_VALUE;
        int[] size = new int[3];
        for (int i = 1; i <= Math.cbrt(n); i++) {
            if (n % i != 0) continue;
            for (int j = i; j <= Math.sqrt(n / i); j++) {
                if ((n / i) % j != 0) continue;
                int k = n / (i * j);
                int surfaceArea = 2 * (i * j + j * k + k * i);
                minSurfaceArea = Math.min(minSurfaceArea, surfaceArea);
                size[0] = i;
                size[1] = j;
                size[2] = k;
            }
        }

        bw.write(size[0] + " " + size[1] + " " + size[2] + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
