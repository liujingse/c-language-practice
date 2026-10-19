#include <stdio.h>
int main() {
	int a,b,c,d;
	printf("请输入三位整数：");
	scanf_s("%d", &a);
	b = a / 100;
	c = (a / 10) % 10;
	d = a % 10;
	printf("百位是:%d\n", b);
	printf("十位是：%d\n", c);
	printf("个位是：%d\n", d);
	return 0;
}