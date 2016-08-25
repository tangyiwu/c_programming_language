#include<stdio.h>
#include<string.h>
#include"mystring.h"

#define MAXLINE 1000

/*
* 	-x 除...之外
*	-n 打印行号
*	eg: find -x -n 模式
**/

int main(int argc, char const *argv[])
{
	char line[MAXLINE];
	long lineno = 0;
	int c,except = 0, number = 0, found = 0;

	while(--argc > 0 && (*++argv)[0] == '-') {
		c = *++argv[0];
		while(c) {
			switch (c) {
				case 'x':
					except = 1;
					break;
				case 'n':
					number = 1;
					break;
				default:
					printf("find: illegal option %c\n", c);
					argc = 0;
					found = -1;
					break;
			}
			c = 0;
		}
	}
	printf("except = %d, number = %d\n", except, number);
	if (argc != 1)
	{
		printf("Usage:find pattern\n");
	} else {
		while(getmyline(line, MAXLINE) > 0) {
			lineno++;
			if ((strstr(line, *argv) != NULL) != except)
			{
				if (number)
				{
					printf("%ld:", lineno);
				}
				printf("%s\n", line);
				found++;
			}
		}
	}
	return found;
}