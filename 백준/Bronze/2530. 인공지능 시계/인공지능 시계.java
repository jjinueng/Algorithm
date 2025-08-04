import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int h = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int s = Integer.parseInt(st.nextToken());

        int t = Integer.parseInt(br.readLine());
        int totalSeconds = h * 3600 + m * 60 + s + t;
        totalSeconds %= 86400;
        int newH = totalSeconds / 3600;
        totalSeconds %= 3600;
        int newM = totalSeconds / 60;
        int newS = totalSeconds % 60;

        bw.write(String.format("%d %d %d", newH, newM, newS));

        bw.flush();
        bw.close();
        br.close();
    }
}
