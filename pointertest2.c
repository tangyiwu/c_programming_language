#include<stdio.h>

int a[] = 
{
	1,2,3,4,5,6
};

void fun(void *a[]);

int main()
{
	fun((void *int)a);
	printf("%d %d\n", a[0],a[1]);
	return 0;
}

void fun(void *a[])
{
	void *temp;
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}