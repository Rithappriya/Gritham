#include <stdio.h>

int main(void) {
	// your code goes here
	int num,n1=0,n2=1,i,nt=0;
	scanf("%d",&num);
	printf("%d %d",n1,n2);
	for(i=3;i<=num;i++)
	{
		nt=n1+n2;
		n1=n2;
		n2=nt;
		printf(" %d",nt);
	}
	return 0;
}
