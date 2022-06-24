#include<stdio.h>
#include<math.h>
int main(){
	int SA_,SB_,time;
	printf("Enter Time Of SA_  : ");
	scanf("%d",&SA_);
	
	printf("Enter Time Of SB_ : ");
	scanf("%d",&SB_);
	
	time=(SA_>SB_)?SA_:SB_;
	
	while(1)
	{
		if(time%SA_==0 && time%SB_==0)
		{
			printf("THE TIME AT WHICH SA_ %d and SB_ %d WILL MEET IS %d MIN",SA_,SB_,time);
			break;
		}
		++time;
}
}
