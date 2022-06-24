#include<stdio.h>
void increment(int a[], int num){
	int b=0;
	printf("\nThe New Value Of Array Is : ");
	int i;
	for( i=0 ; i<num ; i++)
	{
		b=a[i]+2;
		printf("\t%d",b);
	}
}

int main(){
	int arr[100],n;
	int i;
	printf("How Many Times You Want Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter The Value: ");
		scanf("%d",&arr[i]);
	}
	printf("\nThe Value Of Array Is : ");
	for(i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	increment(arr,n);
}



