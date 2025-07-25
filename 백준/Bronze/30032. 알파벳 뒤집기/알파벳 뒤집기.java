import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int D = Integer.parseInt(st.nextToken());

        for (int i = 0; i < N; i++) {
            String line = br.readLine();
            for (int j = 0; j < line.length(); j++) {
                switch (line.charAt(j)) {
                    case 'b':
                        if (D % 2 == 0) {
                            bw.write('d');
                        } else {
                            bw.write('p');
                        }
                        break;
                    case 'd':
                        if (D % 2 == 0) {
                            bw.write('b');
                        } else {
                            bw.write('q');
                        }
                        break;
                    case 'p':
                        if (D % 2 == 0) {
                            bw.write('q');
                        } else {
                            bw.write('b');
                        }
                        break;
                    case 'q':
                        if (D % 2 == 0) {
                            bw.write('p');
                        } else {
                            bw.write('d');
                        }
                        break;
                    default:
                        bw.write(line.charAt(j));
                }
            }
            bw.write("\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
