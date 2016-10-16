#include<stdio.h>//preprocessor directives

int add(int a1, int b1)
{
	return a1 + b1;
}

int sub(int a1, int b1)
{
	return a1-b1;
}

int mul(int a1, int b1)
{
	return a1*b1;
}

int div(int a1, int b1)
{
	return a1/b1;
}

void main()
{
	int a;
	int b;
	int sum;
	clrscr();
	printf("Enter the first value:\n");
	scanf("%d", &a);
	printf("Enter the second value\n:");
	scanf("%d", &b);
	sum = add(a, b);
	printf("addition : %d\n", sum);

	sum = sub(a,b);
	printf("subtraction : %d\n", sum);

	sum = mul(a,b);
	printf("multiplication : %d\n", sum);

	sum = div(a,b);
	printf("divition	 : %d\n", sum);

	getch();
}
