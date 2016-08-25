#include<stdio.h>

int main() {
	int c;
	int spaces = 0;
	while((c=getchar())!=EOF) {
		if(c == ' ') {
			spaces = 1;		
		} else {
			if(spaces) {
				printf(" ");
				printf("%c", c);
				spaces=0;
			} else {
				printf("%c", c);
			} 
			
		} 
	}
	return 0;
}
