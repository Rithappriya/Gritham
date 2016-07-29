#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		{
			printf("%d is equal to its index %d",a[i],i);
		}
	}
	return 0;
}
