#include<stdio.h>
#include<math.h>
int main(){
float area[6],largest=0;
int i;
float a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
float b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
float angle[6]={0.78,0.89,1.3,9.0,1.25,1.75};
int p_no[6]={1,2,3,4,5,6};
for(i=0;i<6;i++)
{
	area[i]=(1.0/2.0*a[i]*b[i]*(sin(angle[i])));
if(area[i]>largest)
{
	largest=area[i];
}
}
for(i=0;i<6;i++)
{
	printf("\nArea Of %d Is %f\n",p_no[i],area[i]);
}
printf("\n\n\nLargest Area Is %f",largest);
}
