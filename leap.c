#include <stdio.h>

int main(void) {
	// your code goes here
int year;
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                printf("given %d is a leap year.", year);
            else
                printf("given %d is not a leap year.", year);
        }
        else
            printf("given %d is a leap year.", year );
    }
    else
        printf("given %d is not a leap year.", year);
	return 0;
}
