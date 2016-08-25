#include<stdio.h>

#define Null '\0'

int fun(int a, int b) {
	return a+b;
}

int fun1(int a, int b, int c) {
	return a+b+c;
}

int main() {
	printf("Null=%d\n", Null);
	printf("%d\n", fun(1,2));
	printf("%d\n", fun1(1,2,3));
	return 0;
}