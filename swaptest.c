#include<stdio.h>

void swap(int *px,int *py) {
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
}
int main() {
	int a=2,b=3;
	printf("a=%d,b=%d\n", a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n", a,b);
	return 0;
}

