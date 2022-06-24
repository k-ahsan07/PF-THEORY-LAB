#include<stdio.h>
int main(){
int  roll,count,last,third,second,first,occur,num;
printf("enter integer");
scanf("%d",&roll);
num=roll;
if(roll>=0){
	do{
		num/=10;
		++count;
	}while(num!=0);
	if(count<=4){
		switch(count){
		case(1):
		printf("only one integer\n");
		break;
		case(2):
		last=roll%10;
		first=roll/10;
		occur=1;
		if(last==first){
			occur=occur+1;
		}
		printf("%d occur %d times\n",last,occur);
		break;
		case(3):
			last=roll%10;
			second=(roll%100)/10;
			first=roll/100;
			occur=occur+1;
			if(last==second){
				occur=occur+1;
			}
			if(last=first){
				occur=occur+1;
			}
			printf("%d occur %d times\n",last,occur);
			break;
			case(4):
				last=roll%10;
				third=(roll%100)/10;
				second=(roll%1000)/100;
				first=roll/1000;
				occur=occur+1;
				if(last==third){
					occur=occur+1;
				}
				if(last==second){
					occur=occur+1;
				}
				if(last==first){
				occur=occur+1;
				}
				printf("%d occur %d times\n",last,occur);
				break;
				default:
					printf("invalid");
					}
	}
	else{
		printf("number should not be greater than 4 digits\n");
	}
}
else{
	printf("number should be positive\n");
}
}
