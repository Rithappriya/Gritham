#include <stdio.h>

int main(void) {
	// your code goes here
int num,i,ans=0,t;
scanf("%d",&num);
t=num;
while(num)
{
i=num%10;
ans=ans*10+i;
num=num/10;
}
printf("reverse of the given %d is: %d",t,ans);
	return 0;
}
