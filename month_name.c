#include<stdio.h>

char *month_name(int n)
{
	static char *name[] = {
		"Illegal month",
		"January","February","March",
		"April","May","June",
		"July","August","September",
		"October","November","December"
	};

	return (n < 1 || n > 12) ? name[0] : name[n];
}
int main()
{
	char *result = month_name(6);
	printf("%s\n", result);
	return 0;
}