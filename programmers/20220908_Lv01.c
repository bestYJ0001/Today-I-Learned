/**
 * 프로그래머스 원데이 챌린지
 * 1. 짝수와 홀수 (Level 1)
 * 2. 나머지가 1이 되는 가장 작은 수
 * 3. 각 자릿수 더하기
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution01_my(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char) * 4);
    if(num%2){
        answer= "Odd";
    }else{
        answer = "Even";
    }
    return answer;
}

int solution02_my(int n) {
    int answer = 0;
    int i = 0;
    for(i = 2; i < n; i++){
        if(n % i == 1){
            answer = i;
            break;
        }
    }
    return answer;
}


int solution03_my(int n) {
    int answer = 0;
    int mod = 0;
    int i = 100000000;
    for(;;){
        mod = (int)(n/i);
        n -= mod * i;
        answer += mod;
        i /= 10;
        if(i==0){
            break;
        }
    }
    return answer;
} // 1점

int solution03_other(int n) {
    int answer = 0;
    while(n){
        answer += n%10;
        n /=10;
    }
    return answer;
}
