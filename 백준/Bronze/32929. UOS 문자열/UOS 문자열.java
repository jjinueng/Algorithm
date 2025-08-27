import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int x = Integer.parseInt(st.nextToken());

        switch (x%3) {
            case 0:
                bw.write("S");
                break;
            case 1:
                bw.write("U");
                break;
            case 2:
                bw.write("O");
                break;
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
