#include<stdio.h>  
  
void percentage(float, float, float, int*, float*, float*, float*);  
  
int main()  
{  
    float a, b, c, total = 0, avg = 0, percent = 0;  
    int max;  
  
    printf("Enter marks obtained in 1 subjects\n");  
    scanf("%f",&a);
	
	printf("Enter marks obtained in 2 subjects\n");  
    scanf("%f",&b); 
	
	printf("Enter marks obtained in 3 subjects\n");  
    scanf("%f",&c);   
  
    printf("Enter Total Marks\n");  
    scanf("%d",&max);  
  
    percentage(a, b, c, &max, &total, &avg, &percent);  
  
    printf("\nTotal Marks Is  %0.2f\n",total);  
    printf("Average Is  %0.2f\n",avg);  
    printf("Percentage Is  %0.2f\n",percent);  
  
    return 0;  
}  
  
void percentage(float x, float y, float z, int *max,float *tot, float *avg, float *per)  
{  
    *tot = x + y + z;  
    *avg = *tot / 3.0;  
  
    *per = *tot * 100.0 / *max;  
}  
