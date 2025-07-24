import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        Map<Integer, Integer> map = new HashMap<>();
        int count = 0;

        while (true) {
            String input = br.readLine();
            if (input.equals("0 0 0 0")) {
                break;
            }
            StringTokenizer st = new StringTokenizer(input);

            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());

            int degrees = 0;
            degrees += 720;
            degrees += ((a - b + 40) % 40) * 9;
            degrees += 360;
            degrees += ((c - b + 40) % 40) * 9;
            degrees += ((c - d + 40) % 40) * 9;
            map.put(count, degrees);
            count++;
        }

        for (int i = 0; i < count; i++) {
            bw.write(map.get(i) + "\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
