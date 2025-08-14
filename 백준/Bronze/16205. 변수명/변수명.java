import java.io.*;
import java.util.*;

public class Main {
    private static void printCamelCase(String str, BufferedWriter bw) throws IOException {
        for (int i = 0; i < str.length(); i++) {
            if (i == 0) {
                bw.write(Character.toLowerCase(str.charAt(i)));
            } else if (str.charAt(i) == '_') {
                i++;
                bw.write(Character.toUpperCase(str.charAt(i)));
            } else {
                bw.write(str.charAt(i));
            }
        }
        bw.write("\n");
    }

    private static void printSnakeCase(String str, BufferedWriter bw) throws IOException {
        for (int i = 0; i < str.length(); i++) {
            if (i == 0) {
                bw.write(Character.toLowerCase(str.charAt(i)));
            } else if (Character.isUpperCase(str.charAt(i))) {
                bw.write("_");
                bw.write(Character.toLowerCase(str.charAt(i)));
            } else {
                bw.write(Character.toLowerCase(str.charAt(i)));
            }
        }
        bw.write("\n");
    }

    private static void printPascalCase(String str, BufferedWriter bw) throws IOException {
        for (int i = 0; i < str.length(); i++) {
            if (i == 0) {
                bw.write(Character.toUpperCase(str.charAt(i)));
            } else if (str.charAt(i) == '_') {
                i++;
                bw.write(Character.toUpperCase(str.charAt(i)));
            } else {
                bw.write(str.charAt(i));
            }
        }
        bw.write("\n");
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        String S = st.nextToken();

        printCamelCase(S, bw);
        printSnakeCase(S, bw);
        printPascalCase(S, bw);

        bw.flush();
        bw.close();
        br.close();
    }
}