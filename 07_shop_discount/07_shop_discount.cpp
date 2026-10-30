#include <stdio.h>
int main() {
	double m, n, s;
	printf("请输入购买金额：");
	scanf_s("%lf", &m);
	if (m < 100) {
		n = 0;
	}
	else if (m >= 100 && m < 200) {
		n = 0.015;

	}

	else if (m >= 200 && m < 300) {
		n = 0.025;
	}
	else if (m >= 300 && m < 400) {
		n = 0.035;
	}
	else if (m >= 400 && m < 500) {
		n = 0.045;
	}
	else if (m >= 500 && m < 600) {
		n = 0.055;
	}
	else {
		n = 0.06;
	}s = m - m * n;
	printf("购买金额=%.2f,实际支付金额=%.2f,返还金额为=%.2f\n", m, s, m * n);
	return 0;
}