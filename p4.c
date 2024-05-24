#include<stdio.h>

main()
{
	div();
}
	
void div()
{
	int a;
	printf("enter any num:-");
	scanf("%d",&a);
	
	if (a%3==0 && a%5==0)
	{	
		printf ("num is divisible by 3 & 5 both");
	}
	else
	{
		printf("num is not divisible by 3 & 5 both");
	}
	return a;
}

