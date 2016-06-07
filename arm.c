#include <stdio.h>

int main(void) {
	// your code goes here
	int n,r,t,sum=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		sum+=r*r*r;
		t=t/10;
	}
	if(n==sum)
	{
		printf("%d is an armstrong number.",n);
	}
	else
		{
		printf("%d is not an armstrong number.",n);
	}
	return 0;
}
