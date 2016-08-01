#include <stdio.h>
void find_unique(int a[100],int n)
{
	int i,j,k,u;
	for(i=0;i<n;i++)
	{
		u=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
					n--;
					j--;
					u=0;
				}
			}
			if(u!=1)
			{
		for(j=i;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		n--;
		i--;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main(void) {
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	find_unique(a,n);
	return 0;
}
