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

	printf("log %d�� %d�� %d �̴�.", a1, x1, y1);


	//log a x = y, a^y = x
	//�α��� ���Լ� y = a^x
}