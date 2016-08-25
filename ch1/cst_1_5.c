#include<stdio.h>

float getCels(int input) {
	return 5.0/9.0*(input-32);
}

int main() {
	int input=300;
	while(input>0) {
		printf("%d ---> %6.1f\n", input, getCels(input));
		input--;
	} 		
	return 0;
}


