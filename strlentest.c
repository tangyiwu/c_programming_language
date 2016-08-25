#include<stdio.h>

int mystrlen(char *s)
{
	int n;
	for (n = 0; *s != '\0'; s++)
	{
			n++;
	}
	return n;
}

int main() {
	char array[] = "Hello,World!";
	char *ptr = array;
	printf("%d\n", mystrlen("Hello,World!"));
	printf("%d\n", mystrlen(array));
	printf("%d\n", mystrlen(ptr));
	return 0;
}

