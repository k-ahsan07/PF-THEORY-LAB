#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>

int decimal(char c)

{
	int count;
	switch(c)
	{
		case'I':
			count=1;
			break;
		case'V':
			count=5;
			break;
		case'X':
			count=10;
			break;
		case'L':
			count=50;
			break;
		case'C':
			count=100;
			break;
		case'D':
			count=500;
			break;
		case'M':
			count=1000;
			break;
			}
			return count;
}
int main()
{
	char roman[1000];
	int num=0,i=0;
	printf("enter the roman numeral");
	scanf("%s",&roman);
	while(roman[i])
	{
		if(decimal(roman[i])<0)
		{
			printf("INVALID");
		}
		if(strlen(roman) -i>2)
		{
			if (decimal(roman[i])<decimal(roman[i+2]))
			{
				printf("INVALID");
			}					
		}
		if(decimal(roman[i])>=decimal(roman[i+1]))
		{
			num=num+decimal(roman[i]);
		}
		else{
			num=num+decimal(roman[i+1])-decimal(roman[i]);
		}
		i++;			
	}		

	
	printf("%d is decimal value",num);
	return 0;
}
