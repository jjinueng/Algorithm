import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        String s = st.nextToken();

        int small = 1;
        int big = 4;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);

            if (c == 'A') {
                if (small == 1) {
                    small = 2;
                } else if (small == 2) {
                    small = 1;
                }
                if (big == 1) {
                    big = 2;
                } else if (big == 2) {
                    big = 1;
                }
            } else if (c == 'B') {
                if (small == 1) {
                    small = 3;
                } else if (small == 3) {
                    small = 1;
                }
                if (big == 1) {
                    big = 3;
                } else if (big == 3) {
                    big = 1;
                }
            } else if (c == 'C') {
                if (small == 1) {
                    small = 4;
                } else if (small == 4) {
                    small = 1;
                }
                if (big == 1) {
                    big = 4;
                } else if (big == 4) {
                    big = 1;
                }
            } else if (c == 'D') {
                if (small == 2) {
                    small = 3;
                } else if (small == 3) {
                    small = 2;
                }
                if (big == 2) {
                    big = 3;
                } else if (big == 3) {
                    big = 2;
                }
            } else if (c == 'E') {
                if (small == 2) {
                    small = 4;
                } else if (small == 4) {
                    small = 2;
                }
                if (big == 2) {
                    big = 4;
                } else if (big == 4) {
                    big = 2;
                }
            } else if (c == 'F') {
                if (small == 3) {
                    small = 4;
                } else if (small == 4) {
                    small = 3;
                }
                if (big == 3) {
                    big = 4;
                } else if (big == 4) {
                    big = 3;
                }
            }
        }

        bw.write(small + "\n" + big + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
