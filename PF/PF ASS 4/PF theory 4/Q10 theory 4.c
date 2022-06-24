#include<stdio.h>
#include<string.h>

struct name{
char person[20];
} ;
void sort(struct name *s_name,int *r_no, float *s_marks);
void roll(int *roll);
void per(struct name *s_name);
int main(){
struct name s_name[7]={{"Salman"},{"Zubair"},{"Ahsan"},{"Farah"},{"Hassan"},{"Kamran"},{"Mariyam"}};
int r_no[7]={1001,1002,1004,1005,1007,1008,1009};
float s_marks[7]={75.5,80,64,78,65,54,60};
sort(s_name,r_no,s_marks);
roll(r_no);
printf("\n");
per(s_name);
}
void sort(struct name *s_name, int *r_no, float *s_marks){
int i,j,temp3=0;
float temp2;
struct name temp;
for(i=0;i<7;i++){
for(j=0;j<7-i-1;j++){
if(s_marks[j]>s_marks[j+1]){
temp=s_name[j];
s_name[j]=s_name[j+1];
s_name[j+1]=temp;

temp2=s_marks[j];
s_marks[j]=s_marks[j+1];
s_marks[j+1]=temp2;

temp3=r_no[j];
r_no[j]=r_no[j+1];
r_no[j+1]=temp3;
}
}
}
printf("\n");
printf("Name:\tMarks:\tRoll number:");

for(i=0;i<7;i++){
printf("\n");
printf("%s\t%.2f\t%d",s_name[i].person,s_marks[i],r_no[i]);
}
}

void roll(int *r_no){
int num;
int i;
printf("\n\nEnter The Roll Number You Want To Search: ");
scanf("%d",&num);
for(i=0;i<7;i++){
if(r_no[i]==num){
printf("\n\nThe Roll Number %d Is At Index %d",num,i);
break;
}
}
}
void per(struct name *s_name){
int i;
int y;
char n[50];
printf("\n\nEnter The Name You Want To Search: ");
scanf("%s",n);
for(i=0;i<7;i++){
  if(strcmp(s_name[i].person,n)==0){
      printf("%s is at index number %d",n,i);
      break;
  }
}
}
