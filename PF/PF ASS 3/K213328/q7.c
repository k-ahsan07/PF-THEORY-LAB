#include<stdio.h>
#include<conio.h>
int main()
{
    int i, num,p=0,n=0,z=0;
    int a[100];

    printf("Enter Numbers: ");
    scanf("%d", &num);

    for(i=0;i<num;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<num;i++)
    {

        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            n++;
        }
        else if(a[i]=0)
        {
            z++;
        }

    }
    printf("Positive Numbers: %d\n",p);
    printf("Negative Numbers: %d\n", n);
    printf("Zero Numbers: %d\n", z);
}
