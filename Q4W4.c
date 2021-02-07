#include<stdio.h>
int main()
{
	float P,C,B,M,Comp,Prcnt;
	int TM;
	char Grade;
	printf("Enter Five Subjects marks(Physics,Chemistry,Biology,Mathematics,Computer)\n");
	scanf("%f %f %f %f %f",&P,&C,&B,&M,&Comp);
	printf("Enter Total marks:");
	scanf("%d",&TM);
	Prcnt=100*(P+C+B+M+Comp)/TM;
	printf("\nPercentage=%f",Prcnt);
	if(Prcnt>=90)
	Grade='A';
	else if(Prcnt>=80)
	Grade='B';
	else if(Prcnt>=70)
	Grade='C';
	else if(Prcnt>=60)
	Grade='D';
	else if(Prcnt>=40)
	Grade='E';
	else
	Grade='F';
	printf("\nGrade=%c",Grade);
	return 0;
}
