#include<stdio.h>
#include<math.h>
int main (){
	int i,age,u,r;
	char city,urban=u , rural=r ;
	for(i=0 ; i<=10 ; i++){

	printf("\nEnter The Age");
	scanf("%d",&age);
	
	printf("\nEnter The City");
	scanf(" %c",&city);
	
	if(age>=18 && city=='u'){
		printf("YOU ARE ELIGIBLE FOR VACCINATION");
	}
	else if(age<18 && city=='r'){
		printf("YOU ARE NOT ELIGIBLE FOR VACCINATION");
	}
}
}
