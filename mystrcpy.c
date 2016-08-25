#include<stdio.h>

void mystrcopy(char *s, char *t) {
	while((*s++ = *t++) != '\0')
		;
}

int main() {
	char str1[] = "Hello,";
	char str2[] = "World!";
	mystrcopy(str1, str2);
	printf("new_string=%s\n", str1);
	printf("string_end=%d\n", '\0');
	return 0;
}

