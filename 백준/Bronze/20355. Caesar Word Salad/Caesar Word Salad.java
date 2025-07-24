import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        String s = st.nextToken();
        int count = 0;

        for (int i = 0; i < 26; i++) {
            StringBuilder sb = new StringBuilder();
            boolean exist = false;
            for (int j = 0; j < s.length(); j++) {
                char c = s.charAt(j);
                if (c >= 'a' && c <= 'z') {
                    c = (char) ((c - 'a' + i) % 26 + 'a');
                }
                if (c == 'i') exist = true;
            }
            if (!exist) count++;
        }

        if (count == 0) {
            bw.write("impossible");
        } else {
            bw.write(String.valueOf(count));
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
