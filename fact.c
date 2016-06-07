#include <stdio.h>

int main(void) {
	// your code goes here
	int num,i=1,fact=1;
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of the %d number is: %d",num,fact);
	return 0;
}
