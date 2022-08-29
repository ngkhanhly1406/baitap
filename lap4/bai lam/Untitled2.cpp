#include<stdio.h>
int main(){
	
	int age = 0;
//	char gender
	printf("age:");
	scanf("%d",&age);
	fflush(stdin);
	printf("gender:");
//	scanf("%c",&gender);
	if( age <=18){
		printf("child");
	}
	else if(age>=25){
		printf("old");
	}
//	else if(gender == 'm'){
		printf("add friend");
	
	//else{
		printf("i don't care");
	}
	



