#include <stdio.h>

int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	{
		printf("given %c character is an alphabet.",ch);
	}
	else
	{
		printf("given %c character is not an alphabet.",ch);
	}
	return 0;
}
