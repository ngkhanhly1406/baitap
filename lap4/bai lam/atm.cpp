#include <stdio.h>

main (){
	int pin, id , i;
	printf("nhap id:\n");
	scanf("%d",&id);
	printf("nhap ma pin:\n");
	scanf("%d",&pin);
	if (id==1234 && pin == 456){
		printf ( "lua chon:\n 1 rut tien \n 2. chuyen khoan \n 3. so du \n 4. ket thuc ");
		fflush(stdin);
		scanf("%d",&i);
	switch (i)
	{
		case 1 :
			printf(" ban muon rut tien ");
			break;
	    case 2 :
	    	printf(" ban muon chuyen khoan");
	    	break;
	    case 3 :
	    	printf(" ban muon xem so du ");
	    	break; 
	    case 4 :
	    	printf(" ket thuc ");
	    	break;
	    }
	}
	else
	     printf (" sai id hoac ma pin , ban hay nhap lai");
	     
	}
	
