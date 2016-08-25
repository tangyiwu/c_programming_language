#include<stdio.h>

int mystrlen(char *s)
{
	char *p = s;
	while(*p != '\0') {
		p++;
	}
	return p-s;
}

int main() {
	char str[] = "Hello,World!";
	printf("length=%d\n", mystrlen(str));
	return 0;
}

