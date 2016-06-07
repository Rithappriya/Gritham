#include <stdio.h>

int main(void) {
	// your code goes here
	int num,r,t,sum=0;
	scanf("%d",&num);
	t=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		sum=sum*10+r;
	}
	if(t==sum)
	{
		printf("given number is palindrome.");
	}
	else
	{
		printf("given number is not palindrome.");
	}
	return 0;
}
