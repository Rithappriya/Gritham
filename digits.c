#include <stdio.h>

int main(void) {
	// your code goes here
	int num,count=0;
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		count=count+1;
	}
	printf("given numbers with digit is: %d",count);
	return 0;
}
