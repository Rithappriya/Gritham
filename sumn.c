#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("sum of %d elements is: %d",n,s);
	return 0;
}
