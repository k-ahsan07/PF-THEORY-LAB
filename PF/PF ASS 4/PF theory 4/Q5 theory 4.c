#include<stdio.h>
void sort(int *a,int n)
{
    int b=0;
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=b;
            }
        }
    } 
}
int main()
{
    int a[100],n;
    printf("How Many Element In Array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element In Array: ");
        scanf("%d",&a[i]);
    }
    printf("array before sortting: \n");
    for (int  i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
   sort(a,n);
   
   printf("\nAfter sortting: \n");

   for (int  i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }   
}
