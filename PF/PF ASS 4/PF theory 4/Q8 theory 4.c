#include<stdio.h>

struct data
{
    int day,month,year;
}a1,a2;

int main()
{
    printf("Enter first date\n");
    scanf("%d:%d:%d",&a1.day,&a1.month,&a1.year);
    printf("Enter the second date\n");
    scanf("%d:%d:%d",&a2.day,&a2.month,&a2.year);
    if(a1.day==a2.day && a1.month==a2.month && a1.year==a2.year)
     printf("Equal\n");
    else
     printf("Unequal");
}






