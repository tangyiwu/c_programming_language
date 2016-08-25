#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"sortlines.c"

#define MAXLINES 5000
char *lineptr[MAXLINES];

void qsortbyfun(void *lineptr[], int left, int right, 
	int (*comp)(const void *, const void *));
int numcmp(const char *, const char *);

int main(int argc, const char *argv[])
{
	int nlines;
	int numberic = 0;

	if (argc > 1 && strcmp(argv[1], "-n") == 0)
		numberic = 1;
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		int(*comp)(const void *, const void *);
		comp = (numberic ? numcmp : strcmp);
		qsortbyfun((void **)lineptr, 0, nlines-1,
			comp);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("input too big to sort\n");
		return 1;
	}
}

void qsortbyfun(void *v[], int left, int right,
	int (*comp)(const void *,const void *))
	{
		int i,last;

		if (left >= right)
		{
			return;
		}
		swapvoid(v, left, (left+right)/2);
		last = left;
		for( i = left+1;i<=right;i++) {
			if((*comp)(v[i], v[left]) < 0)
				swapvoid(v, ++last, i);
		}
		swapvoid(v, left, last);
		qsortbyfun(v, left, last-1, comp);
		qsortbyfun(v, last+1, right, comp);
	}

int numcmp(const char *s1, const char *s2)
{
	double v1,v2;
	v1 = atof(s1);
	v2 = atof(s2);
	if (v1 < v2)
	{
		return -1;
	} else if(v1 > v2) {
		return 1;
	} else {
		return 0;
	}
}
