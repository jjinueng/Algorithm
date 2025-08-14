import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());

        int[] counts = new int[26];

        st = new StringTokenizer(br.readLine());
        
        String word = st.nextToken();
        for (char c : word.toCharArray()) {
            counts[c - 'a']++;
        }

        int u = counts['u' - 'a'];
        int o = counts['o' - 'a'];
        int s = counts['s' - 'a'];
        int p = counts['p' - 'a'];
        int c = counts['c' - 'a'];

        int maxCount = Math.min(Math.min(u, o), Math.min(s, Math.min(p, c)));
        bw.write(maxCount + "\n");

        bw.flush();
        bw.close();
        br.close();
    }
}
