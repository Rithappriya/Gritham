#include <stdio.h>

int main(void) {
	// your code goes here
int num1,num2,min,hcf=1,i;
scanf("%d %d",&num1,&num2);
min=(num1<num2)?num1:num2;
for(i=1;i<=min;i++)
{
if(num1%i==0&&num2%i==0)
{
hcf=i;
}
}
printf("HCF of the given %d %d numbers is:%d",num1,num2,hcf);
	return 0;
}
