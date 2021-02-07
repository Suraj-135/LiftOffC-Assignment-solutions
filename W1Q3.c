#include<stdio.h>
int main()
{
	float R,D,A,C;
	printf("Enter radius of a circle:\n");
	scanf("%f",&R);
	D=2*R;
	C=2*R*22/7;
	A=R*R*22/7;
	printf("Diameter of a circle=%f",D);
	printf("\nCircumference of a circle=%f",C);
	printf("\nArea of a circle=%f",A);
	return 0;
}
