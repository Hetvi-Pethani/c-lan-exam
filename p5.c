#include<stdio.h>
void main(){
	
	int m;
	printf("Enter the number M:");
	scanf("%d",&m);
	
	int a[m];
	int *ptr[m];
	int i;
	
	for(i=0;i<m;i++)
	{
		printf("a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		ptr[i]=&a[i];
	}
	for(i=0;i<m;i++)
	{
		int multiple=(*ptr[i]) * (*ptr[i]);
		printf("%d\t",multiple);
	}
}
