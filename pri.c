#include <stdio.h>

int main(void) {
	// your code goes here
	int n1,n2,i,flag;
	scanf("%d\n%d",&n1,&n2);
	while(n1<n2)
	{
		flag=0;
	for(i=2;i<=n1/2;i++)
	{
		if(n1%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%d\n",n1);
		++n1;
	}
	return 0;
}
