#include <stdio.h>
int main()
{
	int ary[10];
	int i, total, max, min, sum=0;
	for (i=0; i<10; i++)
	{
		printf ("\nNhap gia tri %d :",i+1);
		scanf ("%d",&ary[i]);
	}
	max = ary[0];
	min = ary[0];
	for ( i=1; i<10; i++)
	{
		if (ary[i] > max) max = ary[i];
		if (ary[i] < min) min = ary [i];
		    sum += ary [i];
	}
	printf("\n gia tri lon nhat %d", max);
	printf("\n gia tri nho nhat %d", min);
	printf ("\n gia tri trung binh %d",sum/10);
	

}
