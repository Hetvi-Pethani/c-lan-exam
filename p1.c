#include<stdio.h>
main()
{
   int first, last;
   int  n, ans;
   
   printf("Enter the any number :-");
   scanf("%d",&n);
   
   last = n % 10;
   do{
	first = n % 10;
	n = n / 10;
     }
     while (n>0);
       printf("first number:%d\n",first);
       printf("last number :%d\n",last);

     ans = first + last ;
     printf("sum of %d + %d is :-%d\n",first,last,ans);
   
}
