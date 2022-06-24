include<stdio.h>
#include<math.h>
int main(){
	int num,MSD,LSD,i,n;
	printf("Enter A Number");
	scanf("%d",&num);
	
	LSD=num%10;
	MSD=num/1000;

	n=MSD + LSD + pow(2,5);
	
  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}
