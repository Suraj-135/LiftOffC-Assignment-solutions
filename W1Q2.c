#include<stdio.h>
int main()
{
	float C,F;
	printf("Enter temperature in celcius:\n");
	scanf("%f",&C);
	F=(C*9/5)+32;
	printf("The temperature in fahrenhite is:""%f",F);
	return 0;
}
