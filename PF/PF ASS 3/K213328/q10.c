#include<stdio.h>
int main()
{
	int age,i,j,k;
	
	printf("Enter Your Age : ");
	scanf("%d",&age);
	
	for( i=1 ; i<age ; i++)
	{
		for(j=i ; j<age ; j++)
		{
			for(k=j ; k<age ; k++)
			{
				if( k*k==i*i+j*j || i*i==k*k+j*j || j*j==i*i+k*k )
				{
					printf("%d %d %d \n",i,j,k);
				}
			}
			
		}
	}
	
}
