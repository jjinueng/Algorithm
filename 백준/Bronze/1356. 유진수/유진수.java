import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        String s = st.nextToken();
        boolean isYujinsu = false;

        for (int i = 1; i < s.length(); i++) {
            String firstHalf = s.substring(0, i);
            String secondHalf = s.substring(i);

            int firstSum = 1;
            int secondSum = 1;

            for (char c : firstHalf.toCharArray()) {
                firstSum *= c - '0';
            }
            for (char c : secondHalf.toCharArray()) {
                secondSum *= c - '0';
            }

            if (firstSum == secondSum) {
                isYujinsu = true;
                break;
            }
        }

        if (isYujinsu) {
            bw.write("YES");
        } else {
            bw.write("NO");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
