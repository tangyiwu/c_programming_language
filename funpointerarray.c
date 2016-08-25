#include<stdio.h>

int add1(int a1, int b1);
int add2(int a2, int b2);

int main()
{
	int a1 = 1, b1 = 2;
	int a2 = 2, b2 = 3;
	int(*op[2])(int a, int b);

	op[0] = add1;
	op[1] = add2;

	printf("%d %d\n", (*op[0])(a1, b1), op[1](a2, b2));
	return 0;
}

int add1(int a1, int b1)
{
	return a1+b1;
}

int add2(int a2, int b2)
{
	return a2+b2;
}