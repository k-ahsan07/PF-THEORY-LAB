#include<stdio.h>
void display(int a[10]){
	int max=0 ,min=0,sum=0;
	int k=0,j=0;
	int i;
	k=a[10];
	max=k;
	for(i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
		sum=sum+a[i];
	}
	j=a[0];
	min=j;
	for(i=1;i<10;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("\nThe Sum Is %d",sum);
	printf("\nThe Maximum Value Is %d",max);
	printf("\nThe Minimum Value Is %d",min);
}
int main(){
	int arr[10];
	int i;
	for(i=i=0;i<10;i++){
		printf("Enter Value: ");
		scanf("%d",&arr[i]);
	}
	display(arr);
}
