#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("repeated elements are:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ",a[i]);
			}
		}
	}
	return 0;
}
