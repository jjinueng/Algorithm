import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        String s = st.nextToken();

        int count = 0;
        int result = 0;

        for (int i = 1; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= 'A' && c <= 'Z') {
                if(count % 4 != 3) {
                    result += 3 - count % 4;
                }
                count = 0;
            } else {
                count++;
            }
        }

        bw.write(String.valueOf(result));


        bw.flush();
        bw.close();
        br.close();
    }
}
