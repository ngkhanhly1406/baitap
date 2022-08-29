/* to test for a leap year*/
#include<stdio.h>
int main()
{
	int year;
	printf("\nPlease enter a year :");
	scanf("%d",&year);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	    printf("\n5d is a leap year",year);
}
