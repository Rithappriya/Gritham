#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	int i,count=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
	return 0;
}
