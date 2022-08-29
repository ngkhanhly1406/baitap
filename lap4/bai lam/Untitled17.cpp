#include <stdio.h>
int main(){
	int a, c, i;
	i = 0;
	do{
	
	    printf ("nhap vao mot so bat ki:");
	    scanf("%d",&a);
	    if (a % 2 == 0 && a !=0 ){
		i++;
}
	    printf ("ban co muon tiep tuc khong \nco:co, khong:khong\n");
	    fflush(stdin);
	    scanf("%c",&c);
		}
	while ( c == 'y' || c== 'Y' );
	printf ("so luong so chan la %d",&i);
	
	
}
