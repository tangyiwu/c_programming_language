#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char str[20];
}data;

int main(int argc, char *argv[])
{
	// union Data data;

	printf("Memory size occupied by data: %lu\n", sizeof(data));
	return 0;
}