import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String input;
        while ((input = br.readLine()) != null) {
            for (int i = 0; i < input.length(); i++) {
                char c = input.charAt(i);
                if (c == ' ') {
                    bw.write(" ");
                } else {
                    bw.write(findQwerty(c));
                }
            }
            bw.newLine();
        }

        bw.flush();
        bw.close();
        br.close();
    }

    public static Character findQwerty(char str) {
        String s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == str) {
                return s.charAt(i - 1);
            }
        }
        return str;
    }
}
