#include<stdio.h>

int main()
{
	int a=2,b=3;
	int *pa = &a;
	int *pb = &b;
	printf("*pa = %d\n", *pa);
	printf("*pb = %d\n", *pb);

	int **pc = &pa;
	printf("**pc = %d\n", **pc);

	int ***pd = &pc;
	printf("***pd = %d\n", ***pd);
	return 0;
}