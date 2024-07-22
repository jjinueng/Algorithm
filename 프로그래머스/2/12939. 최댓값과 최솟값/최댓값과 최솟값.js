function solution(s) {
    var answer = '';
    
    let arr = s.split(' ');
    
    let min = Number(arr[0]);
    let max = Number(arr[0]);
    for(let i = 1; i < arr.length; i++) {
        if(arr[i] < min) min = Number(arr[i]);
        if(arr[i] > max) max = Number(arr[i]);
    }

    answer = min + ' ' + max;
    
    return answer;
}