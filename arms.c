#include <stdio.h>

int main(void) {
	// your code goes here
	int n1,n2,t,r,i,sum;
	scanf("%d\n%d",&n1,&n2);
	for(i=n1+1;i<n2;i++)
	{
		t=i;
		sum=0;
		while(t!=0)
		{
			r=t%10;
			sum+=r*r*r;
			t=t/10;
		}
			if(i==sum)
			{
				printf("%d\n",i);
				}
	}
return 0;
}
