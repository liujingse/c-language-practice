#include <stdio.h>
int main()
{
	int year;
	printf("请输入年份：");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400== 0) {
		printf("%d 是闰年\n", year);
	}
	else
	{
		printf("%d 是平年\n", year);
	}return 0;
}


		
