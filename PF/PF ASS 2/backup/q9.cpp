#include<stdio.h>
#include<stdlib.h>
main(){
	int b1,b2,b3,b4,b5,b6,b7,n,d1,d2,d3,d4,d5,d6,d7;
	printf("Enter the last two digits of your roll number: ");
	scanf("%d", &n);
	if (n > 99 || n < 0){
		printf("Invalid input, please try again.");
		exit(0);
	}
    b1 = n % 2;
    b2 = (n/2) % 2;
    b3 = (n/4) % 2;
    b4 = (n/8) % 2;
    b5 = (n/16) % 2;
    b6 = (n/32) % 2;
    b7 = (n/64) % 2;
    printf("The binary equivalent of %d is: %d%d%d%d%d%d%d\n",n, b7,b6,b5,b4,b3,b2,b1);
    d1 = b1 * 1;
    d2 = b2 * 2;
    d3 = b3 * 4;
    d4 = b4 * 8;
    d5 = b5 * 16;
    d6 = b6 * 32;
    d7 = b7 * 64;
    printf("The decimal equivalent of %d%d%d%d%d%d%d is: %d",b7,b6,b5,b4,b3,b2,b1,d1+d2+d3+d4+d5+d6+d7);
}
