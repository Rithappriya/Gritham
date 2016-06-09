#include <stdio.h>

int main(void) {
	// your code goes here
int n1,n2,r;
scanf("%d %d",&n1,&n2);
if(n2>n1)
{
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
}
do
{
r=n1%n2;
n1=n2;
n2=r;
}
while(r!=0);
printf("%d",n1);
	return 0;
}
