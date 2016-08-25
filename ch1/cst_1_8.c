#include<stdio.h>

int main(){
	int spaceCount=0,tableCount=0,rowCount=0;
	int c;
	while((c=getchar()) != EOF) {
		if(c == 'e')
			break;
		if(c == ' ')
			spaceCount++;
		if(c == '\t')
			tableCount++;
		if(c == '\n')
			rowCount++;
	}
	printf("%d %d %d\n", spaceCount, tableCount, rowCount);
	return 0;
}
