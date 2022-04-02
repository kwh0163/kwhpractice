#pragma once

#include<math.h>
void Log()
{
	int x1, a1, y1, x2, a2, y2;

	scanf_s("%d %d", &a1, &x1);

	x2 = x1;
	a2 = a1;

	y2 = pow(a2, x2);

	y1 = y2;

	printf("log %d의 %d는 %d 이다.", a1, x1, y1);


	//log a x = y, a^y = x
	//로그의 역함수 y = a^x
}