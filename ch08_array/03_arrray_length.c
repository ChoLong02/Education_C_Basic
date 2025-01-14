#include <stdio.h>

// 배열 길이 계산
//  - C언어는 sizeof() 계산
//  
// ※ C언어 이외 객체지향언어(JAVA, PYTHON, 등등)
//    - 배열을 객체로 표현
//    - 기본적으로 배열이름.length → 배열 길이
//    -            len(배열이름)   → 배열 길이

int main() {
    int score[5];
	int total = 0;
	double avg;
	int count;                        // 배열 요소의 개수를 저장할 변수
    
    // sizeof(score)     → 20 Byte
    // sizeof(socre[0])  → 4 Byte
    int count = sizeof(score) / sizeof(score[0]);
    printf("배열길이: %d", count);

    count = sizeof(score) / sizeof(score[0]);   // 배열 요소의 개수 계산
	for (int i = 0; i < count; i++) {     // 11행에서 계산한 count만큼 반복
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < count; i++) {     // 11행에서 계산한 count만큼 반복
		total += score[i];
	}
	avg = total / (double)count;      // 총합을 count로 나누어 평균 계산

	for (int i = 0; i < count; i++) {     // 11행에서 계산한 count만큼 반복
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);
}
