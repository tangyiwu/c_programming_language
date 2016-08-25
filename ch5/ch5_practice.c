#include <stdio.h>
#include "mystring.h"

int main()
{
	char s1[100] = "aaaaaaaa";
	char s2[] = "bbbbb";
	char s3[] = "aaabbbb";
	char s4[] = "aaaaaaaabbbb";
	// printf("测试复制功能\n");
	// mystrcpy(s1, s2);
	// printf("复制后s1=%s\n", s1);
	// s1 = "aaaaaaaa";
	// s2 = "bbbbb";

	// printf("练习5-3\n");
	// mystrcat(s1,s2);
	// printf("cat后s1=%s\n", s1);
	// s1 = "aaaaaaaa";
	// s2 = "bbbbb";

	// printf("练习5-4\n");
	// int e = mystrend(s1, s2);
	// printf("比较结果:%d\n", e);
	// s1 = "aaaaaaaa";
	// s2 = "bbbbb";

	printf("练习5-5\n");
	int result = mystrncmp(s1, s4, 8);
	if (result > 0)
	{
		printf("%s > %s\n", s1, s4);
	} else if(result == 0) {
		printf("%s == %s\n", s1, s4);
	} else {
		printf("%s < %s\n", s1, s4);
	}
	return 0;
}