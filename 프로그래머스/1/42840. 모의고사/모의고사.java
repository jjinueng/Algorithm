import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> solution(int[] answers) {
        List<Integer> answer = new ArrayList<>();
        
        int[] a = {1,2,3,4,5};
        int[] b = {2,1,2,3,2,4,2,5};
        int[] c = {3,3,1,1,2,2,4,4,5,5};
        
        int scoreA = 0;
        int scoreB = 0;
        int scoreC = 0;
        
        for(int i=0; i<answers.length; i++) {
            if(answers[i] == a[i%a.length]) scoreA++;
            if(answers[i] == b[i%b.length]) scoreB++;
            if(answers[i] == c[i%c.length]) scoreC++;
        }
        
        int maxScore = Math.max(scoreA, (Math.max(scoreB, scoreC)));
        
        if(scoreA == maxScore) answer.add(1);
        if(scoreB == maxScore) answer.add(2);
        if(scoreC == maxScore) answer.add(3);
        
        return answer;
    }
}