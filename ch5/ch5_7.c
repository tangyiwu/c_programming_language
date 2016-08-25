#include<stdio.h>

static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_of_year(int year, int month,int day)
{
	int i,leap;

	if (month < 1 || month > 12)
	{
		printf("month输入错误\n");
		return -1;
	}

	leap = (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0;

	if (day < 1 || day > daytab[leap][month])
	{
		printf("day输入错误\n");
		return -1;
	}
	for (i = 1; i < month; ++i)
	{
		day += daytab[leap][i];
	}
	return day;
}

void month_day(int year,int yearday, int *month, int *day)
{
	if (yearday < 1)
	{
		printf("yearday输入错误\n");
		return;
	}
	int i,leap;
	leap = (year % 4 == 0 && year % 400 != 0) || year % 400 == 0;

	if (leap && yearday > 366)
	{
		printf("yearday输入错误\n");
		return;
	} else if(leap != 1 && yearday > 365) 
	{
		printf("yearday输入错误\n");
		return;
	}

	for (i = 1; yearday > daytab[leap][i]; ++i)
	{
		yearday -= daytab[leap][i];
	}
	*month = i;
	*day = yearday;
}

int main()
{
	int yearday = day_of_year(2016, 6, 20);
	printf("今天是%d年的第的%d天\n", 2016, yearday);

	int month;
	int day;
	month_day(2016, yearday, &month, &day);
	printf("今天是%d-%d-%d\n", 2016, month, day);

	day_of_year(2016,-5,30);
	day_of_year(2016,13,20);
	day_of_year(2016,12,32);

	month_day(2016,366,&month, &day);
	month_day(2017,366,&month, &day);
	month_day(2018,366,&month, &day);
	month_day(2019,366,&month, &day);
	month_day(2016,-50,&month, &day);
	return 0;
}