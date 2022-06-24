#include<stdio.h>
int main(){
int a,b,c,d,angle1,angle2,angle3,angle4;

printf("enter value of a\n");
scanf("%d",&a);

printf("enter value of b\n");
scanf("%d",&b);

printf("enter value of c\n");
scanf("%d",&c);

printf("enter value of d\n");
scanf("%d",&d);

printf("enter value of angle1\n");
scanf("%d",&angle1);

printf("enter value of angle2\n");
scanf("%d",&angle2);

printf("enter value of angle3\n");
scanf("%d",&angle3);

printf("enter value of angle4\n");
scanf("%d",&angle4);

if(a==b && b==c && c==d && angle1==angle2 && angle2==angle3 && angle3==angle4 && angle1+angle2+angle3+angle4==360){
	printf("IT IS SQUARE");
}
else if(a==c,b==d && angle1==angle2 && angle2==angle3 &&angle3==angle4 && angle1+angle2+angle3+angle4==360){
	printf("IT IS RECTANGLE");
}
else if(a==b && b==c && c==d && angle1==angle2 && angle2==angle3 && angle3==angle4 && angle4!=90){
	printf("IS IS RHOMBUS");
}
else if(a!=b && b!=c && c!=d && angle1==angle2 && angle2==angle3 && angle3==angle4){
	printf("IT IS TRAPEZOID");
}
else if(a=b && b==c && c==d && angle1==angle2 && angle2==angle3 && angle3==angle4){
	printf("IT IS KITE");
}









}
