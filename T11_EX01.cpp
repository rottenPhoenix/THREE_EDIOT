/*
 �� ������, (�� ������)
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

// bool : ������ ����� ���� (1byte)

// a >= b : a�� b���� ũ�ų� ����.
// a <= b : a�� b���� �۰ų� ����.
// a != b : a�� b�� �ƴϴ�.
