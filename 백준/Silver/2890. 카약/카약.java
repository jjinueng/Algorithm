import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int R = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());

        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < R; i++) {
            String line = br.readLine();
            int count = 0;
            int num = 0;
            boolean getNum = false;

            for (int j = 1; j < C - 1; j++) {
                char ch = line.charAt(j);
                if (ch != '.') {
                    num = Character.getNumericValue(ch);
                    getNum = true;
                } else {
                    if (getNum) {
                        count++;
                    }
                }
            }

            if(num != 0) {
                map.put(num, count);
            }
        }

        List<Integer> keys = new ArrayList<>(map.keySet());
        Collections.sort(keys, (a, b) -> {
            int countA = map.get(a);
            int countB = map.get(b);
            if (countA == countB) {
                return Integer.compare(a, b);
            }
            return Integer.compare(countA, countB);
        });

        Map<Integer, Integer> rankMap = new HashMap<>();
        int rank = 0;
        for (int key : keys) {
            if (rankMap.isEmpty() || map.get(key) != map.get(keys.get(rankMap.size() - 1))) {
                rank++;
            }
            rankMap.put(key, rank);
        }

        Collections.sort(keys);

        for (int key : keys) {
            bw.write(rankMap.get(key) + "\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
