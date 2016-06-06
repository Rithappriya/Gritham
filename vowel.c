#include <stdio.h>

int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("given %c character is vowel.",ch);
	}
	else
	{
		printf("given %c character is consonant.",ch);
	}
	return 0;
}
