#include <stdio.h>
int main()
{
	double rate, usd;
	int krw;
	rate = 1200;
	krw = 1000000;
	usd = krw/rate;
	printf("%d�� %d�޷� �Դϴ�.", krw, usd);
	return 0;
}
