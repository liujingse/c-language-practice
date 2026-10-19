#include <stdio.h>
#define pi 3.14f
int main()
{
	float r, s, c;
	printf("请输入半径:");
	scanf_s("%f", &r);
	s = pi * r * r;
	c = 2 * pi * r;
	printf("该圆的面积为：%f,该圆的周长为:%f.\n", s, c);
	return 0;
}
