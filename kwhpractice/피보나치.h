#pragma once

void Fibonacci()
{
	int x;
	int first = 0;
	int second = 1;
	int result = 1;
	scanf_s("%d", &x);

	while (first + second <= x)
	{
		result = first + second;
		printf("%d\n", result);
		first = second;
		second = result;
	}
}