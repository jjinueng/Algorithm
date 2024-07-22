function solution(s){
    var answer = true;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    console.log('Hello Javascript')
    
    var countP = 0;
    var countY =0;
    for (let i = 0; i < s.length; i++) {
        let c = s[i]
        if(c=='p' || c=='P') countP++;
        if(c=='y' || c=='Y') countY++;
    }
    if(countP!=countY) answer = false;

    return answer;
}