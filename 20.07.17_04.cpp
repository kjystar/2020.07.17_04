#include <stdio.h>
int main()
{
	double rate, usd;
	int krw;
	rate = 1200;
	krw = 1000000;
	usd = krw/rate;
	printf("%d는 %d달러 입니다.", krw, usd);
	return 0;
}
