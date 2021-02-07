#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabate:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':printf("\nIt is a vowel");
		break;
		case 'a':printf("\nIt is a vowel");
		break;
		case 'E':printf("\nIt is a vowel");
		break;
		case 'e':printf("\nIt is a vowel");
		break;
		case 'I':printf("\nIt is a vowel");
		break;
		case 'i':printf("\nIt is a vowel");
		break;
		case 'O':printf("\nIt is a vowel");
		break;
		case 'o':printf("\nIt is a vowel");
		break;
		case 'U':printf("\nIT is a vowel");
		break;
		case 'u':printf("\nIt is a vowel");
		break;
		default:
			printf("\nIt is a consonent");
			return 0;
	}
}
