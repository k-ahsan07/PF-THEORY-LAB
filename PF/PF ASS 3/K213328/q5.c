#include<stdio.h>
#include<math.h>
int main()
{
	int msd;
	float n;
	int i;
	int x1;
	int y1;
	int x;
	int y;
	int rx=1;
	int ry=3;
	float dist;
	printf("what is msd of your mobile number: ");
	scanf("%d",&msd);
	
	if((msd>0)&&(msd<=9))
	{
		n=pow(2,msd)*0.0625;
		printf("The N is %.2f\n",n);
		
		for(i=1;i<=n;i++)
		{
		printf("what is the value of X and Y: ");
		scanf("%d%d",&x1,&y1);
		x=(rx-x1)*(rx-x1);
		y=(ry-y1)*(ry-y1);
		dist=sqrt(x+y);
		printf("the dist %d is %f\n",i,dist);
		
		}
	}
	else if (msd==0)
	{
		n=pow(2,msd)*(3+4);
		printf("The N is %.2f\n",n);
		for(i=1;i<=n;i++)
		{
		printf("what is the value of X and Y: ");
		scanf("%d%d",&x1,&y1);
		x=(rx-x1)*(rx-x1);
		y=(ry-y1)*(ry-y1);
		dist=sqrt(x+y);
		printf("the dist %d is %f\n",i,dist);
		
		}
	}
	else
	{
	printf("the msd should be a single digit or zero");
}
}
