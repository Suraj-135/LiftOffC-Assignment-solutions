#include<stdio.h>
int main()
{
	float a,b,Result;
	int choice;
	printf("Enter two numbers:\n");
	scanf("%f %f",&a,&b);
	printf("\nEnter your choice (\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division )");
	scanf("%d",&choice);
	if(choice==1)
	{
		Result=a+b;
		printf("\nAddition of numbers=%f",Result);
	}
	else if(choice==2)
	{
		Result=a-b;
		printf("\nSubtraction of numbers=%f",Result);
		
	}
	else if(choice==3)
	{
		Result=a*b;
		printf("\nMultiplication of numbers=%f",Result);
		
	}
	else
	{
		Result=a/b;
		printf("\nDivision of numbers=%f",Result);
		
	}
	return 0;
}
