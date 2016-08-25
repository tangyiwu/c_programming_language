#include<stdio.h>

char *Names[] = 
{
	"Bill",
	"Sam",
	"Jim",
	"Paul",
	"Charles",
	0
};

int main()
{
	char **nm = Names;
	while(*nm != 0)
		printf("%s\n", *nm++);
}