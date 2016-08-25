#include<stdio.h>

/*
将字符串t复制给字符串s
*/
void mystrcpy(char *s, char *t) {
	while(*t != '\0')
	{
		*s = *t;
		s++;
		t++;
	}
}

/*比较字符串大小*/
int mystrcmp(char *s, char *t)
{
	for (; *s == *t; s++,t++)
	{
		if (*s == '\0')
		{
			return 0;
		}
	}
	return *s - *t;
}

/*将字符串t复制到字符串s尾部*/
void mystrcat(char *s, char *t)
{
	while(*s != '\0') {
		s++;
	}
	while(*t != '\0') {
		*s = *t;
		s++;
		t++;
	}
}

/*判断字符串s尾部是否存在字符串t，1表示存在，0表示不存在*/
int mystrend(char *s, char *t) {
	int len1 = 0;
	while( *s != '\0') {
		s++;
		len1++;
	}
	int len2 = 0;
	while( *t != '\0') {
		t++;
		len2++;
	}

	if (len1 < len2)
	{
		return 0;
	}

	int i;
	for (i = 0; i < len2; ++i)
	{
		if (*s != *t)
		{
			return 0;
		}
		s--;
		t--;
	}
	return 1;
}

void mystrncpy(char *s, char *t, int n)
{
	while(*t != '\0' && n > 0) {
		*s = *t;
		s++;
		t++;
		n--;
	}
}

void mystrncat(char *s, char *t, int n)
{
	while(*s != '\0') {
		s++;
	}
	while(*t != '\0' && n > 0) {
		*s = *t;
		s++;
		t++;
		n--;
	}
}

int mystrncmp(char *s, char *t, int n)
{
	n--;
	while(*s == *t && n > 0) {
		if(*s == '\0') {
			return 0;
		}
		s++;
		t++;
		n--;
	}
	return *s - *t;
}

int getmyline(char *s,int lim)
{
	int c,i;
	for (i = 0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; s++, i++)
	{
		*s = c;
	}
	if (c == '\n')
	{
		*s = c;
		++i;
	}
	*s = '\0';
	return i;
}

