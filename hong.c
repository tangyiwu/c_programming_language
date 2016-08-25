#include <stdio.h>
#include <ascii.h>

int main ()
{
	printf("File :%s\n", _FILE_);
	printf("Date :%s\n", _DATE_);
	printf("Time :%s\n", _TIME_);
	printf("Line :%s\n", _LINE_);
	printf("ANSI :%s\n", _STDC_);

   return 0;
}