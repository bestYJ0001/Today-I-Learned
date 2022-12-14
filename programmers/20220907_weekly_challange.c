/**
 * 프로그래머스 위클리 챌린지
 * 1. 부족한 금액 계산하기 (Level 1)
 *    채점 결과
 *    정확성: 100.0
 *    합계: 100.0 / 100.0
 * 2. 교점에 별 만들기 (Level 2)
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution01_my(int price, int money, int count) {
    long total = 0;
    int i = 0;
    for(i = 0; i < count; i++){
        total += price * (i + 1);
    }
    if(money < total){
        return total - money;
    }
    return 0;
}

long long solution01_other(long price, long money, long count) {
    long long answer = (count + 1) * count / 2 * price;

    if (money - answer >= 0)
        return 0;

    return answer - money;
}

// line_rows는 2차원 배열 line의 행 길이, line_cols는 2차원 배열 line의 열 길이입니다.
char** solution02_my(int** line, size_t line_rows, size_t line_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // example 1 -> line, 5, 3
    // 2, -1, 4 -> 2x -y + 4 = 0
    int i = 0, j = 0;
    int point[3] = {0,};
    for(i=0;i<line_rows - 1; i++){
        for(j=1;j<line_rows;j++){
            get_point_of_intersection(line[i], line[j]);
        }
    }
    // char** answer = (char**)malloc(1);
    return answer;
}