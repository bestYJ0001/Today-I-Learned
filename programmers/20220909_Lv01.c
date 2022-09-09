/**
 * 프로그래머스 원데이 챌린지
 * 1. 약수의 합
 * 2. 정수 제곱근 판별
 * 3. 평균 구하기
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution01_my(int n) {
    int answer = 0;
    int i = 0;
    for(i = 1; i < n+1; i++){
        if(n%i==0){
            answer += i;
        }
    }
    return answer;
}

long long solution02_my(long long n) {
    long long answer = 0;
    double sqrt_value = 0.0;
    sqrt_value = sqrt(n);
    if(pow((int)sqrt_value, 2) == n ){
        return pow((int)sqrt_value + 1, 2);
    }else{
        return -1;
    }
    return 0;
}

// arr_len은 배열 arr의 길이입니다.
double solution03_my(int arr[], size_t arr_len) {
    double answer = 0;
    int i = 0;
    for (i=0;i<arr_len;i++){
        answer += arr[i];
    }
    answer /= arr_len;
    return answer;
    // 1점짜리 였음
}
