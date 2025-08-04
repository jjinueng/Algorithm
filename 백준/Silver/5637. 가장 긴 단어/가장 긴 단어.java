import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String longestWord = "";

        while (true) {
            String line = br.readLine();
            line = line.replaceAll("[^a-zA-Z-]", " ");

            StringTokenizer st = new StringTokenizer(line);

            while (st.hasMoreTokens()) {
                String word = st.nextToken();
                if (word.equalsIgnoreCase("E-N-D")) {
                    bw.write(longestWord.toLowerCase() + "\n");
                    bw.flush();
                    bw.close();
                    br.close();
                    return;
                }

                if (word.length() > longestWord.length()) {
                    longestWord = word;
                }
            }
        }
    }
}
