/**
 * 프로그래머스 원데이 챌린지
 * 1. 자연수 뒤집어 배열로 만들기 (C)
 * 2. 문자열 내 p와 y의 개수 (c++)
 * 3. 정수 내림차순으로 배치하기 (C++)
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution01_my(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    // Language : C
    int i = 0;
    int* rst = (int*)malloc(sizeof(int) * 11);
    
    for(;;)
    {
        rst[i] = (int)(n % 10);
        n = ((n - rst[i])/10);
        i++;
        if(n == 0){
            break;
        }
    }
    int* answer = (int*)malloc(sizeof(int) * i);
    for(int j = 0; j < i; j++){
        answer[j] = rst[j];
    }
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

long long solution03_my(long long n) {
    long long answer = 0;
    int result[12] = {0,};
    int i = 0;
    for(;;){
        result[i] = (int)(n % 10);
        n = (n - result[i]) / 10;
        i++;
        if(n==0) break;
    }
    std::sort(result, result +i);
    for(;;){
        i -= 1;
        answer += result[i] * pow(10, i);
        if(i==0) break;
    }
    return answer;
}

#include <functional> 
// sort generator를 위해 functional이 필요
using namespace std;
// 이마를 탁치고 감
long long solution03_other(long long n) {
    long long answer = 0;

    string str = to_string(n);
    sort(str.begin(), str.end(), greater<char>());
    answer = stoll(str);

    return answer;
}