#include <stdio.h>
int main() {
	int a, b, c, x, y, max;
	printf("请输入三边长度:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a) {
		printf("不构成三角形：");
		return 0;
	}
	max = a;
	x = b;
	y = c;
	if (b > a) {
		max = b;
		x = a;
		y = c;
	}if (c > max) {
		max = c;
		x = a;
		y = b;
	}if (max == x && x == y) {
		printf("该三角形为等边三角形");
	}
	else if (x == y) {
		printf("该三角形为等腰三角形");
	}
	else if (max * max == x * x + y * y) {
		printf("该三角形为直角三角形");
	}
	else {
		printf("该三角形为普通三角形:");
	}return 0;
}