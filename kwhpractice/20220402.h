#pragma once
#include <stdio.h>
#include <Windows.h>

//void main()
//{
	//char value = 10;
	//short num = 20;

	//�Ϲ��� �� ��ȯ
	/*
	//������ �°�
	//CPU�� ������ ������ �� ���� ���� ������ �ڷ������� �Ϲ��� �� ��ȯ�� �̷�����ϴ�.
	printf("value ũ�� : %d\n", sizeof(value));
	printf("num ũ�� : %d\n", sizeof(num));
	printf("value + num ũ�� : %d\n", sizeof(value + num));
	
	//character -128 ~ 127, 129������ �����÷ο� �������� -127�� ��µ�
	int count = 129;
	char character = count;

	printf("character�� ��: %d\n", character);


	//4 byte
	int object = 16;
	//4 byte
	float memory = object;

	printf("memory�� �� : %f\n", memory);
	*/

	//����� �� ��ȯ
	/*
	int red = 3;
	int blue = 2;

	//������ ������ �����ϸ� ������ ������� ������.
	float result = (float)red / blue;

	printf("result�� ��� �� : %f\n", result);
	*/

	//�ּ� ������
	/*
	int value = 10;
	//������ �ּҸ� ��Ÿ���� ���������� = %p
	printf("%p", &value);
	*/

	//�Է� �Լ�
	/*
	int x = 0;

	scanf_s("%d", &x);

	printf("x�� �� : %d\n", x);
	*/

	//���� ������
	/*
	int power = 0;
	int result = 0;

	//���� ���� ������
	result = ++power;		//power + 1 -> ���� ����
	printf("result�� �� : %d\n", result);

	//���� ���� ������
	result = power++;		//���� ���� -> power + 1
	printf("result�� �� : %d\n", result);

	result = power;			//power= 2
	printf("result�� �� : %d\n", result);

	//���� ���� ������
	result = --power;		//power - 1 -> �������
	printf("result�� �� : %d\n", result);

	//���� ���� ������
	result = power--;		//������� -> power- 1
	printf("result�� �� : %d\n", result);

	result = power;			//power= 0
	printf("result�� �� : %d\n", result);
	*/

	//while �� (��� ���ϱ�)
	/*
	//while(���ǹ�) ��ɹ� : ���ǹ��� ���϶� ��ɹ� �ݺ�
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

	//do - while��
	/*
	do
	{
		printf("start");
	}
	while (10 == 10);
	*/

	//for��
	/*
		//for(�ʱ�� ; �ʱ�Ŀ� ���� ���ǹ� ; �ʱ���� ������) ��ɹ� : ���ǹ��� ���϶� ��ɹ�, ������ �ݺ�
		for (int i = 5; i > 0; i--)
		{
			printf("%d\n", i);
		}
		*/

	//2�� for��
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

	//�� ������
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

	//��и�
	/*
		int x, y, n;

		scanf_s("%d %d", &x, &y);

		if (x > 0 && y > 0) n = 1;
		else if (x < 0 && y > 0) n = 2;
		else if (x < 0 && y < 0) n = 3;
		else if (x > 0 && y < 0) n = 4;
		else if (x == 0 && y != 0)
		{
			printf("y����");
			return;
		}
		else if (x != 0 && y == 0)
		{
			printf("x����");
			return;
		}
		else
		{
			printf("����");
			return;
		}
		printf("��%d��и�", n);
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

	//shift ������
	/*
			int memory = 3;	//0000 0011
			printf("memory�� �� : %d\n", memory <<= 3);	//0000 0011 -> 0001 1000 = 16 + 8 = 24

			int count = 10;	//0000 1010
			printf("memory�� �� : %d\n", count >>= 2); // 0000 1010 -> 0000 0010 = 2
			printf("memory�� �� : %d\n", count <<= 2); // 0000 0010 -> 0000 1000 = 8		��������� �ٽ� ���ƿ�������
			*/

//}
