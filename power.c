#include <stdio.h>

int main(void) {
	// your code goes here
	int b,e,ans=1;
	scanf("%d\n%d",&b,&e);
	while(e!=0)
	{
		ans*=b;
		--e;
	}
	printf("power of the given number is: %d",ans);
	return 0;
}
