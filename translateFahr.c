#include<stdio.h>

int main() {
	int fahr;
	float cels;
	printf("请输入华氏温度:\n");
	scanf("%d",&fahr);
	cels=5.0/9.0*(fahr-32);
	printf("转化后摄氏度为: %6.1f\n",cels);
	return 0;
}
