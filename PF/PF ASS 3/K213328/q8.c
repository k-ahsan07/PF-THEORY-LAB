#include<stdio.h>
#include<math.h>
int main(){
	int i;
	char pattern;
	printf("Enter The Pattern");
	scanf("\n%c",&pattern);
	 for(i=0;i<5;i++)
	 {
	 
	 	if(pattern=='n'){
	 		printf("#NormalSituationNormalSituationNormalSituationNormalSituationNormalSituationNormalSituation#");
		 }
		else{
			printf("#AbnormalSituationAbnormalSituationAbnormalSituationAbnormalSituationAbnormalSituationAbnormalSituation#");
		}
	 }
}
