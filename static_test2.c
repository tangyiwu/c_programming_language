#include<stdio.h>

/*函数声明*/
void func(void);

int count = 5;/*全局变量*/

int main(int argc, char const *argv[])
{
	while(count--) {
		func();
	}
	return 0;
}

void func(void) {
	int i = 5;/*局部静态变量*/
	i++;

	printf("i is %d and count is %d\n", i, count);
}