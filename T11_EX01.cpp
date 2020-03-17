/*
 비교 연산자, (논리 연산자)
 */
#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);

	bool p = a > b;

	bool q = a < b;

	bool r = a == b; // == : same

	// 2 >3 -> false
	// true : 1, false : 0



	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}

// bool : 진리값 저장용 변수 (1byte)

// a >= b : a는 b보다 크거나 같다.
// a <= b : a는 b보다 작거나 같다.
// a != b : a는 b가 아니다.
