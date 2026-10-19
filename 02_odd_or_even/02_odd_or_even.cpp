#include <stdio.h>
int main()
{
	int a;
	printf("请输入整数：");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d 是偶数 \n", a);
	}
	else
	{
		printf("%d 是奇数 \n", a);
	}
	return 0;
}