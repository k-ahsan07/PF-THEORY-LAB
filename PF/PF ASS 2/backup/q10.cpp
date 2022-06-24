#include<stdio.h>
#include<stdlib.h>
main(){
	int count = 0;
    int e1,e2,e3,e4,n,d1,d2,d3,d4,n1,n2,n3,n4,q1,q2,q3,q4,begin, after=0;
    printf("Enter any four digit integer: ");
    scanf("%n%d%n", &begin, &n, &after); 
    count = after - begin;
    if(count != 4){
    	printf("Invalid input, try again.");
    	exit(1);
	}
    n1 = n / 1000;
    n2 = ((n / 100) % 10);
    n3 = ((n / 10) % 10);
    n4 = (n % 10);
    e1 = (n1 + 5) % 8;
    q1 = n1/8;
    e2 = (n2 + 5) % 8;
    q2 = n2/8;
    e3 = (n3 + 5) % 8;
    q3 = n3/8;
    e4 = (n4 + 5) % 8;
    q4 = n4/8;
    printf("The encrypted integer is: %d%d%d%d\n", e2,e1,e4,e3);
    d1 = ((q1*8) + e1) - 5;
    if(d1 < 0) d1 = d1 + 8;
    d2 = ((q2*8) + e2) - 5;
    if(d2 < 0) d2 = d2 + 8;
    d3 = ((q3*8) + e3) - 5;
    if(d3 < 0) d3 = d3 + 8;
    d4 = ((q4*8) + e4) - 5;
    if(d4 < 0) d4 = d4 + 8;
    printf("The decrypted integer is: %d%d%d%d\n", d1,d2,d3,d4);
    if ((n1 == d1) && (n2 == d2) && (n3 == d3) && (n4 == d4)){
    	printf("The data before encryption and after encryption is same, congrats!");
	}else printf("The data before encryption and after encryption is not same. Troubleshoot your code!");
}

