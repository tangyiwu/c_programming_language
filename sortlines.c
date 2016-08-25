#include<stdio.h>
#include<string.h>
#include<time.h>

/*
＊ 输入字符串，给每行排序
**/
#define MAXLINES 5000
char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
int readlines2(char *lineptr[], char *alloc, int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

int main()
{
	int nlines;
	char alloc[10000];
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		printf("=============================================\n");
		printf("sort %d lines:\n", nlines);
		qsort(lineptr, 0, nlines-1);
		printf("=================write lines=================\n");
		writelines(lineptr, nlines);
		printf("=============================================\n");
		return 0;
	} else {
		printf("error:input too big to sort\n");
		return 1;
	}
}

#define MAXLEN 1000
int getmyline(char *,int);
char *alloc(int);

int readlines(char *lineptr[], int maxlines)
{
	clock_t start,finish;
	double duration;
	start = clock();
	int len,nlines;
	char *p, line[MAXLEN];
	nlines = 0;
	while((len = getmyline(line, MAXLEN)) > 0)
	{
		if (nlines >= maxlines || (p = alloc(len)) == NULL)
		{
			return -1;
		} else{
			line[len-1] = '\0';
			strcpy(p,line);
			lineptr[nlines++] = p;
		}
	}
	finish = clock();
	duration = (double)(finish - start) /CLOCKS_PER_SEC;
	printf("run method readlines take %f seconds\n", duration);
	return nlines;
}

int readlines2(char *lineptr[], char *alloc, int maxlines)
{
	clock_t start,finish;
	double duration;
	start = clock();
	int len,nlines;
	char *p, line[MAXLEN];
	nlines = 0;
	while((len = getmyline(line, MAXLEN)) > 0)
	{
		if (nlines >= maxlines || (p = alloc) == NULL)
		{
			return -1;
		} else{
			line[len-1] = '\0';
			strcpy(p,line);
			lineptr[nlines++] = p;
			alloc += len;
		}
	}
	finish = clock();
	duration = (double)(finish - start) /CLOCKS_PER_SEC;
	printf("run method readlines take %f seconds\n", duration);
	return nlines;
}

void writelines(char *lineptr[], int nlines)
{
	int i;
	for (i =0;i < nlines;i++)
	{
		printf("%s\n", lineptr[i]);
	}
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

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n)
	{
		allocp += n;
		return allocp - n;
	} else{
		return 0;
	}
}

void afree(char *p)
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
	{
		allocp = p;
	}
}

void qsort(char *v[],int left,int right)
{
	int i,last;
	void swap(char *v[],int i,int j);
	if (left >= right)
	{
		return;
	}
	swap(v, left, (left+right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
	{
		if (strcmp(v[i],v[left]) < 0)
		{
			swap(v,++last,i);
		}
	}
	swap(v,left,last);
	qsort(v,left,last-1);
	qsort(v,last+1,right);
}

void swap(char *v[],int i,int j)
{
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void swapvoid(void *v[],int i,int j)
{
	void *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}