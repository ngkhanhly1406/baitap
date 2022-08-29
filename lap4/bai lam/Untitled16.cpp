#include <stdio.h>
int main(){
	int choice, pin, id;
	char choice2;
	printf("nhap cardid:\n"),
	scanf("%d",&pin);
	printf("nhap ma pin:\n"),
	scanf("%d",&id);
	if (pin==246 && id==135)
	{
		do{
			printf ("menu\n");
	    	printf(" 1.rut tien\n 2.rut tien \n 3.chuen khoan \n 4.so du \n");
		    scanf("%d",&choice);
	     switch(choice){
		
	
               case 1 :
                	printf("ban muon rut tien");
                 	break;
               case 2:
                   	printf("ban muon chuyen khoan");
	                break;
               case 3:
                   	printf("ban muon xem so du");
	                break;
               case 4:
	                printf("ban muon ket thuc");
                	break;
			   }
			   printf("ban co muon tiep tuc");
			   fflush(stdin);
			   scanf("%c",&choice2);
		
		}	while ( choice2 == 'y');
		
	
		
}

}

