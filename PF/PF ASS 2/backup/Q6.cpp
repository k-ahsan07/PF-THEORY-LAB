#include<stdio.h>  
#include<math.h>
int main()    
{    
int num,rev_num,sum=0,temp,count=0;    
printf("enter the number");    
scanf("%d",&num);
temp=num;  
if(temp>=0){
	do{temp/=10;
	count++;
	}while(temp!=0);
	temp=num;
	printf("%d\n",count);
} if(count<5 || count>5){
	printf("error");
} 
else{
	rev_num=num%10;    
	sum=(sum*10)+rev_num;    
	num=num/10;    
   
if(temp==sum){
 	printf("palindrome number ");
}    
else{    
	printf("not palindrome");}
}
}
