import java.io.*;
import java.util.*;

public class Main {
    static int[] parse(String m) {
        int c = 0, h = 0, o = 0;
        for (int i = 0; i < m.length(); i++) {
            char atom = m.charAt(i);
            int cnt = 1;
            if (i + 1 < m.length() && Character.isDigit(m.charAt(i + 1))) {
                cnt = m.charAt(i + 1) - '0';
                i++;
            }
            if (atom == 'C') c += cnt;
            else if (atom == 'H') h += cnt;
            else if (atom == 'O') o += cnt;
        }
        return new int[]{c, h, o};
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String s = br.readLine().trim();
        String[] parts = s.split("[+=]");

        int[] v1 = parse(parts[0]);
        int[] v2 = parse(parts[1]);
        int[] v3 = parse(parts[2]);

        outer:
        for (int x1 = 1; x1 <= 10; x1++) {
            for (int x2 = 1; x2 <= 10; x2++) {
                for (int x3 = 1; x3 <= 10; x3++) {
                    if (v1[0] * x1 + v2[0] * x2 == v3[0] * x3 &&
                            v1[1] * x1 + v2[1] * x2 == v3[1] * x3 &&
                            v1[2] * x1 + v2[2] * x2 == v3[2] * x3) {
                        bw.write(x1 + " " + x2 + " " + x3);
                        break outer;
                    }
                }
            }
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
