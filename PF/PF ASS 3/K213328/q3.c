#include<stdio.h>
#include<math.h>

int main(){
    int x,i;
    int fact = 1,n;
    float sum=0;

    printf("Enter the value of x :");
    scanf("%d",&x);

    printf("\nEnter the number of terms: ");
    scanf("%d",&n);//AS WE KNOW FACTOR OF 42 AND 98 IS 14

    for(i=1;i<n;i++){
        fact=fact*i;
        sum=sum+(pow(x,i)/fact) ;
	 }	 
    sum= sum +1;
    printf("\nThe sum of the taylor series is : %f\n",sum);
}
