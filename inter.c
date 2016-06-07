#include <stdio.h>

int main(void) {
	// your code goes here
	int n1,n2,i;
	scanf("%d\n%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
