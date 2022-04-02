#pragma once
#include <stdio.h>
#include <Windows.h>

//void main()
//{
	//char value = 10;
	//short num = 20;

	//암묵적 형 변환
	/*
	//정수의 승격
	//CPU가 연산을 수행할 때 가장 빠른 정수형 자료형으로 암묵적 형 변환이 이루어집니다.
	printf("value 크기 : %d\n", sizeof(value));
	printf("num 크기 : %d\n", sizeof(num));
	printf("value + num 크기 : %d\n", sizeof(value + num));
	
	//character -128 ~ 127, 129가들어가서 오버플로우 현상으로 -127이 출력됨
	int count = 129;
	char character = count;

	printf("character의 값: %d\n", character);


	//4 byte
	int object = 16;
	//4 byte
	float memory = object;

	printf("memory의 값 : %f\n", memory);
	*/

	//명시적 형 변환
	/*
	int red = 3;
	int blue = 2;

	//정수와 정수를 연산하면 정수의 결과값만 가진다.
	float result = (float)red / blue;

	printf("result의 결과 값 : %f\n", result);
	*/

	//주소 연산자
	/*
	int value = 10;
	//변수의 주소를 나타내는 서식지정자 = %p
	printf("%p", &value);
	*/

	//입력 함수
	/*
	int x = 0;

	scanf_s("%d", &x);

	printf("x의 값 : %d\n", x);
	*/

	//증감 연산자
	/*
	int power = 0;
	int result = 0;

	//전위 증가 연산자
	result = ++power;		//power + 1 -> 연산 수행
	printf("result의 값 : %d\n", result);

	//후위 증가 연산자
	result = power++;		//연산 수행 -> power + 1
	printf("result의 값 : %d\n", result);

	result = power;			//power= 2
	printf("result의 값 : %d\n", result);

	//전위 감소 연산자
	result = --power;		//power - 1 -> 연산수행
	printf("result의 값 : %d\n", result);

	//후위 감소 연산자
	result = power--;		//연산수행 -> power- 1
	printf("result의 값 : %d\n", result);

	result = power;			//power= 0
	printf("result의 값 : %d\n", result);
	*/

	//while 문 (약수 구하기)
	/*
	//while(조건문) 명령문 : 조건문이 참일때 명령문 반복
	int input = 3;
	int i = 1;
	scanf_s("%d", &input);

	while (input >= i)
	{
		if (input % i == 0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	*/

	//do - while문
	/*
	do
	{
		printf("start");
	}
	while (10 == 10);
	*/

	//for문
	/*
		//for(초기식 ; 초기식에 대한 조건문 ; 초기식의 증감식) 명령문 : 조건문이 참일때 명령문, 증감식 반복
		for (int i = 5; i > 0; i--)
		{
			printf("%d\n", i);
		}
		*/

	//2중 for문
	/*
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("skill\n");
		}

		printf("---------\n");
	}
	*/

	//논리 연산자
	/*
		if (10 == 10 && 15 == 20)
		{
			printf("AND Operator\n");
		}

		if (10 == 10 || 15 == 20)
		{
			printf("OR Operator\n");
		}

		if (!1)
		{
			printf("NOT Operator\n");
		}
		*/

	//사분면
	/*
		int x, y, n;

		scanf_s("%d %d", &x, &y);

		if (x > 0 && y > 0) n = 1;
		else if (x < 0 && y > 0) n = 2;
		else if (x < 0 && y < 0) n = 3;
		else if (x > 0 && y < 0) n = 4;
		else if (x == 0 && y != 0)
		{
			printf("y절편");
			return;
		}
		else if (x != 0 && y == 0)
		{
			printf("x절편");
			return;
		}
		else
		{
			printf("원점");
			return;
		}
		printf("제%d사분면", n);
		*/

	//continue
	/*
			for (int i = 1; i < 6; i++)
			{
				if (i % 3 == 0)
				{
					continue;
				}
				printf("%d    ", i);
			}
			*/

	//shift 연산자
	/*
			int memory = 3;	//0000 0011
			printf("memory의 값 : %d\n", memory <<= 3);	//0000 0011 -> 0001 1000 = 16 + 8 = 24

			int count = 10;	//0000 1010
			printf("memory의 값 : %d\n", count >>= 2); // 0000 1010 -> 0000 0010 = 2
			printf("memory의 값 : %d\n", count <<= 2); // 0000 0010 -> 0000 1000 = 8		사라진값은 다시 돌아오지않음
			*/

//}
