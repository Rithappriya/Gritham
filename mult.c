#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n,ans=0;
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		ans=i*n;
		printf("%d*%d=%d\t",i,n,ans);
	printf("\n");
	}
	return 0;
}
